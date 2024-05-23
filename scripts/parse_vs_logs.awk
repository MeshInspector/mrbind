# A helper for `msvc_comp_db.sh`.

# Enclose in double quotes and add escaping.
function quote(x)
{
    return "\"" gensub(/["\\]/, "\\\\&", "g", x) "\""
}

# From string `s`, extact matches for regex `a`, and replace each match with string `b`.
# Returns a space-separated list of matches.
function extract(s, a, b)
{
    ret = ""
    while (s != "" && match(s, a) > 0)
    {
        if (ret != "")
            ret = ret " "
        ret = ret gensub(a, b, 1, substr(s, RSTART, RLENGTH))
        s = substr(s, RSTART + (RLENGTH ? RLENGTH : 1));
    }
    return ret
}

BEGIN {
    # Extract the first word of `cxx`, which should be the compiler name.
    compiler_name = gensub(/ .*/, "", 1, cxx)

    if (compiler_name ~ /^-/)
    {
        print "The compiler name starts with a `-`. Did you forget the compiler name and only added the flags?" >"/dev/stderr"
        exit 1
    }

    # Whether we should try to convert arguments to GNU style.
    convert_args = compiler_name !~ /cl$/
}

/^\^/ {
    f = gensub(/^\^/, "", 1, $0)
    next
}

{
    if (convert_args)
    {
        # The source filename.
        # Not strictly necessary, mrbind will remove it from the command,
        # but mrbind will complain if it's not there, to make sure the removal code is not broken.
        cmd = f

        # Headers included with a flag.
        cmd = cmd " " extract($0, " /FI ?([^ ]+)", "-include\\1")
        # Header search directories.
        cmd = cmd " " extract($0, " /I ?([^ ]+)", "-I\\1")
        # Macro definitions.
        cmd = cmd " " extract($0, " /D ?([^ ]+)", "-D\\1")
    }
    else
    {
        cmd = " " $0
    }
    print "{\"file\": " quote(f) ", \"command\": " quote(cxx " " cmd) "}"
}