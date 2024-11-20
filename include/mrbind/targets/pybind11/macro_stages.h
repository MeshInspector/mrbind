// Intentionally no pragma once, to allow re-including multiple times with different values of `MB_PB11_STAGE`.

#include <mrbind/targets/pybind11/core.h>

#ifndef MB_PB11_STAGE


// Silence some warnings:
#ifdef __clang__
// Clang warns about `::` + `*` coming from different macros, but all compilers including Clang emit a hard error when trying to paste the two tokens together.
#pragma clang diagnostic ignored "-Wcompound-token-split-by-macro"
#endif



// Helper macros:

// A helper that generates function parameter bindings.
#define DETAIL_MB_PB11_MAKE_PARAMS(seq) SF_FOR_EACH0(DETAIL_MB_PB11_MAKE_PARAMS_BODY, SF_NULL, SF_NULL,, seq)
#define DETAIL_MB_PB11_MAKE_PARAMS_BODY(n, d, type_, name_, .../*default_arg_*/) \
    MRBIND_CAT(DETAIL_MB_PB11_MAKE_PARAMS_BODY_ARG_, __VA_OPT__(0))(name_ __VA_OPT__(,) __VA_ARGS__)

#define DETAIL_MB_PB11_MAKE_PARAMS_BODY_ARG_(name_) \
    , pybind11::arg(MRBind::pb11::AdjustPythonKeywords(MRBIND_STR(name_)).c_str())
#define DETAIL_MB_PB11_MAKE_PARAMS_BODY_ARG_0(name_, default_arg_) \
    , MRBind::pb11::ParamWithDefaultArg(MRBind::pb11::AdjustPythonKeywords(MRBIND_STR(name_)).c_str(), MRBIND_IDENTITY default_arg_, "'" MRBIND_STR(MRBIND_IDENTITY default_arg_) "'")

// A helper that generates a list of parameter types.
// We also decay arrays and functions to pointers here.
// It's easier than doing this in the templates, and easier than trying to figure out how to make libclang do it.
#define DETAIL_MB_PB11_PARAM_TYPES(seq) MRBIND_STRIP_LEADING_COMMA(DETAIL_MB_PB11_PARAM_TYPES_WITH_LEADING_COMMA(seq))
#define DETAIL_MB_PB11_PARAM_TYPES_WITH_LEADING_COMMA(seq) SF_FOR_EACH0(DETAIL_MB_PB11_PARAM_TYPES_BODY, SF_NULL, SF_NULL, 1, seq)
#define DETAIL_MB_PB11_PARAM_TYPES_BODY(n, d, type_, name_, .../*default_arg_*/) \
    , MRBind::pb11::DecayToTrueParamType<MRBIND_IDENTITY type_>

// A helper that generates function parameter declarations, with placeholder names (to not choke on unnamed parameters), and with no default arguments.
#define DETAIL_MB_PB11_MAKE_PARAM_DECLS(seq) MRBIND_STRIP_LEADING_COMMA(DETAIL_MB_PB11_MAKE_PARAM_DECLS_WITH_LEADING_COMMA(seq))
#define DETAIL_MB_PB11_MAKE_PARAM_DECLS_WITH_LEADING_COMMA(seq) SF_FOR_EACH0(DETAIL_MB_PB11_MAKE_PARAM_DECLS_BODY, DETAIL_MB_PB11_MAKE_PARAM_DECLS_STEP, SF_NULL, i, seq)
#define DETAIL_MB_PB11_MAKE_PARAM_DECLS_BODY(n, d, type_, name_, .../*default_arg_*/) , std::type_identity_t<MRBIND_IDENTITY type_> d
#define DETAIL_MB_PB11_MAKE_PARAM_DECLS_STEP(n, d, ...) MRBIND_CAT(d, i)

// A helper that generates function parameter uses (comma-separated names, forwarded),
// with the same placeholder names as `DETAIL_MB_PB11_MAKE_PARAM_DECLS`.
#define DETAIL_MB_PB11_MAKE_PARAM_USES(seq) MRBIND_STRIP_LEADING_COMMA(DETAIL_MB_PB11_MAKE_PARAM_USES_WITH_LEADING_COMMA(seq))
#define DETAIL_MB_PB11_MAKE_PARAM_USES_WITH_LEADING_COMMA(seq) SF_FOR_EACH0(DETAIL_MB_PB11_MAKE_PARAM_USES_BODY, DETAIL_MB_PB11_MAKE_PARAM_DECLS_STEP, SF_NULL, i, seq)
#define DETAIL_MB_PB11_MAKE_PARAM_USES_BODY(n, d, type_, name_, .../*default_arg_*/) , std::forward<decltype(d)>(d)

// A helper that generates a list of info wrappers about each parameter.
#define DETAIL_MB_PB11_PARAM_ENTRIES_WITH_LEADING_COMMA(seq) SF_FOR_EACH0(DETAIL_MB_PB11_PARAM_ENTRIES_BODY, SF_NULL, SF_NULL, 1, seq)
#define DETAIL_MB_PB11_PARAM_ENTRIES_BODY(n, d, type_, name_, .../*default_arg_*/) \
    , MRBIND_IDENTITY type_

// A helper that generates a list of pybind type names corresponding to the C++ parameter types.
#define DETAIL_MB_PB11_PARAM_PB_SIGNATURE(seq) { SF_FOR_EACH0(DETAIL_MB_PB11_PARAM_PB_SIGNATURE_BODY, SF_NULL, SF_NULL, 1, seq) }
#define DETAIL_MB_PB11_PARAM_PB_SIGNATURE_BODY(n, d, type_, name_, .../*default_arg_*/) \
    typeid(MRBind::pb11::ToPybindSignatureType<MRBind::pb11::AdjustedParamType<MRBind::pb11::DecayToTrueParamType<MRBIND_IDENTITY type_>>>),

// Returns the number of function parameters with default arguments.
#define DETAIL_MB_PB11_NUM_DEF_ARGS(seq) 0 SF_FOR_EACH0(DETAIL_MB_PB11_NUM_DEF_ARGS_BODY, SF_NULL, SF_NULL,, seq)
#define DETAIL_MB_PB11_NUM_DEF_ARGS_BODY(n, d, type_, name_, .../*default_arg_*/) __VA_OPT__(+1)

// A helper for `MB_ENUM` that generates the elements.
#define DETAIL_MB_PB11_MAKE_ENUM_ELEMS(name, seq) SF_FOR_EACH(DETAIL_MB_PB11_MAKE_ENUM_ELEMS_BODY, SF_STATE, SF_NULL, name, seq)
#define DETAIL_MB_PB11_MAKE_ENUM_ELEMS_BODY(n, d, name_, value_, comment_) \
    _pb11_e.value(MRBIND_STR(name_), MRBIND_IDENTITY d::name_ MRBIND_PREPEND_COMMA(comment_));

// A helper for `MB_CLASS` that generates the base class list with a leading comma.
#define DETAIL_MB_PB11_BASE_TYPES(seq) SF_FOR_EACH(DETAIL_MB_PB11_BASE_TYPES_BODY, SF_NULL, SF_NULL,, seq)
#define DETAIL_MB_PB11_BASE_TYPES_BODY(n, d, type_, virtual_) , MRBIND_IDENTITY type_

// Given a namespace stack (see comments on `MB_NAMESPACE` in `define_missing_macros.h`),
// returns the kind of the most nested entry (`cl` for class, `ns` for namespace). For empty input returns `ns`.
#define DETAIL_MB_PB11_LAST_SCOPE_KIND(ns_stack_) SF_FOR_EACH(SF_NULL, DETAIL_MB_PB11_LAST_SCOPE_KIND_STEP, SF_STATE, ns, ns_stack_)
#define DETAIL_MB_PB11_LAST_SCOPE_KIND_STEP(n, d, name_, kind_) kind_

// For a function, provides either a function pointer to call it, or a lambda to do the same.
#define DETAIL_MB_PB11_FUNC_PTR_OR_LAMBDA(ret_, name_, qualname_, ns_stack_, params_) \
    MRBIND_CAT(DETAIL_MB_PB11_FUNC_PTR_OR_LAMBDA_,DETAIL_MB_PB11_LAST_SCOPE_KIND(ns_stack_))(ret_, name_, qualname_, ns_stack_, params_)
// For namespace-scoped functions, we get a function pointer.
// Cast it to the correct type to select an overload.
#define DETAIL_MB_PB11_FUNC_PTR_OR_LAMBDA_ns(ret_, simplename_, qualname_, ns_stack_, params_) \
    static_cast<std::type_identity_t<MRBIND_IDENTITY ret_>(*)(DETAIL_MB_PB11_PARAM_TYPES(params_))> qualname_
// For class-scoped functions (i.e. friend functions, since methods are handled elsewhere), we generate a lambda that ADL-calls the function.
// Must use a lambda because friend functions are not callable without ADL unless redeclared separately.
// We used to redeclare them using codegen, but it's tricky for two reasons:
// 1. Friends can be templated, and then they must be redeclared as a template (doable, but I haven't figured out, though I didn't try it that much).
// 2. More importantly, it doesn't play well with our forced template instantiations in the parser (e.g. of classes referred to by typedefs),
//    because if we generate declarations for their friend functions, those declarations will be rejected when compiling the binding (because the functions
//    will not exist at that point, and scoped declarations can't be made without an existing function). But we could in theory wrap the declarations =
//    in namespaces when generating them, instead of qualifying. This could work.
// So a lambda just looks easier.
// A lambda generates an extra move per argument, but whatever. I don't think we can call functions with non-movable arguments by value (from python) anyway.
#define DETAIL_MB_PB11_FUNC_PTR_OR_LAMBDA_cl(ret_, simplename_, qualname_, ns_stack_, params_) \
    []( DETAIL_MB_PB11_MAKE_PARAM_DECLS(params_) ) -> decltype(auto) {return simplename_( DETAIL_MB_PB11_MAKE_PARAM_USES(params_) );}

#define DETAIL_MB_PB11_IF_STATIC_(x, y) y
#define DETAIL_MB_PB11_IF_STATIC_static(x, y) x

#define DETAIL_MB_PB11_IF_EXPLICIT_() false
#define DETAIL_MB_PB11_IF_EXPLICIT_explicit() true

// If the parameter is empty, returns `nullptr`. Otherwise returns it as is. This is intended for optional comment strings.
#define DETAIL_MB_PB11_COMMENT_PTR(...) MRBIND_CAT(DETAIL_MB_PB11_COMMENT_PTR_, __VA_OPT__(1))(__VA_ARGS__)
#define DETAIL_MB_PB11_COMMENT_PTR_(...) nullptr
#define DETAIL_MB_PB11_COMMENT_PTR_1(...) __VA_ARGS__

// Returns the "namespace marker" class for the given namespace stack.
// E.g. given `(a,ns)(b,ns)(c,cl)`, this returns `MRBind::pb11::NsMarker<MRBind::ns:: a::b::c ::_pb11_ns_marker>`.
#define DETAIL_MB_PB11_NS_MARKER(ns_stack_) MRBind::pb11::NsMarker<SF_FOR_EACH(DETAIL_MB_PB11_NS_MARKER_BODY, SF_NULL, SF_NULL,, ns_stack_) ::_pb11_ns_marker>
#define DETAIL_MB_PB11_NS_MARKER_BODY(n, d, name_, kind_) ::name_



// #################################### STAGE 0 ####################################

#define MB_INCLUDE_ORIGINAL_HEADER 2

// Define the marker structs for all the namespaces.
// The one for the global namespace is defined at the top of this file.
#define MB_NAMESPACE(namespace_, inline_, ns_stack_, comment_) \
    inline_ namespace namespace_ \
    { \
        struct MB_PB11_EXPORT_TYPE _pb11_ns_marker;

#define MB_END_NAMESPACE(namespace_, inline_, ns_stack_) \
    }

#include <mrbind/helpers/define_missing_macros.h>
#define MB_PB11_STAGE 1
#define MB_AGAIN

#elif MB_PB11_STAGE == 1 // #################################### STAGE 1 ####################################

#include <mrbind/helpers/undef_all_macros.h>

#define MB_FILE static const char MRBIND_UNIQUE_VAR = []{
#define MB_END_FILE return char{}; }();

// For namespaces, emit braces with `using namespace`.
// This helps with name lookup for default arguments (where we can't easily fully qualify the types ourselves).
#define MB_NAMESPACE(namespace_, inline_, ns_stack_, comment_) \
    { \
        using namespace namespace_; \
        using _pb11_this_ns [[maybe_unused]] = DETAIL_MB_PB11_NS_MARKER(ns_stack_(namespace_,ns)); \
        (void)MRBind::pb11::RegisterNamespaceMarker<_pb11_this_ns, DETAIL_MB_PB11_NS_MARKER(ns_stack_)>{}; \

#define MB_END_NAMESPACE(namespace_, inline_, ns_stack_) \
    }

// Bind a function.
#define MB_FUNC(ret_, name_, simplename_, qualname_, fullqualname_, ns_stack_, comment_, params_) \
    MRBind::pb11::GetRegistry().func_entries.emplace_back( \
        /* Qualified name */\
        MRBIND_STR(MRBIND_IDENTITY qualname_), \
        /* Qualified name with template arguments */\
        MRBIND_STR(MRBIND_IDENTITY fullqualname_), \
        +[](MRBind::pb11::ModuleOrClassRef _pb11_m, MRBind::pb11::TryAddFuncState &_pb11_state, MRBind::pb11::TryAddFuncScopeState &_pb11_scope_state, int _pb11_pass_number, const char *_pb11_qual_name, const char *_pb11_qual_name_with_template_args, MRBind::pb11::FuncAliasRegistrationFuncs *_pb11_func_alias_registration_funcs) \
        {\
            MRBind::pb11::TryAddFunc<\
                MRBind::pb11::FuncKind::nonmember_or_static, \
                /* The function pointer or a lambda. */\
                DETAIL_MB_PB11_FUNC_PTR_OR_LAMBDA(ret_, name_, qualname_, ns_stack_, params_) \
                /* Parameter types. */\
                DETAIL_MB_PB11_PARAM_ENTRIES_WITH_LEADING_COMMA(params_) \
            >( \
                _pb11_m, \
                /* Simple name */\
                MRBIND_STR(simplename_), \
                /* Qualified name */\
                _pb11_qual_name, \
                /* Qualified name with template arguments */\
                _pb11_qual_name_with_template_args, \
                /* Pybind signature (to detect overloadable functions). */\
                DETAIL_MB_PB11_PARAM_PB_SIGNATURE(params_), \
                /* Pass information. */\
                &_pb11_state, &_pb11_scope_state, _pb11_pass_number, \
                /* Func alias information. */\
                _pb11_func_alias_registration_funcs, \
                /* Pybind extras: */\
                [](auto _pb11_f){_pb11_f(MRBIND_STRIP_LEADING_COMMA( \
                    /* Parameters. */\
                    DETAIL_MB_PB11_MAKE_PARAMS(params_) \
                    /* Comment, if any. */ \
                    MRBIND_PREPEND_COMMA(comment_) \
                ));} \
            ); \
        } \
    );

// Bind a enum.
#define MB_ENUM(kind_, name_, qualname_, ns_stack_, type_, comment_, elems_) \
    MRBind::pb11::GetRegistry().type_entries.try_emplace( \
        typeid(MRBIND_IDENTITY qualname_), \
        /* Is parsed? */\
        true, \
        /* Parent namespace or class. */\
        typeid(_pb11_this_ns), \
        /* Comment: */\
        DETAIL_MB_PB11_COMMENT_PTR(comment_), \
        /* Emit docstrings? */\
        false, /* Don't generate docstrings for enums, this crashes for some reason. And passing it to `enum_` below seems to have no effect? Weird. */ \
        /* C++ type name: */\
        MRBIND_STR(MRBIND_IDENTITY qualname_), \
        /* Init lambda. */\
        +[](MRBind::pb11::ModuleOrClassRef _pb11_m, const char *_pb11_n) -> std::unique_ptr<MRBind::pb11::BasicPybindType> \
        { \
            return std::make_unique<MRBind::pb11::SpecificPybindType<pybind11::enum_<MRBIND_IDENTITY qualname_>>>(*_pb11_m.handle, _pb11_n); \
        }, \
        /* Members lamdba. */\
        +[](MRBind::pb11::BasicPybindType &_pb11_b, MRBind::pb11::TypeEntry::AddClassMembersState &_pb11_state, MRBind::pb11::FuncAliasRegistrationFuncs *) \
        { \
            if (_pb11_state.pass_number != 0) return; /* Only one pass is needed. */\
            [[maybe_unused]] pybind11::enum_<MRBIND_IDENTITY qualname_> &_pb11_e = static_cast<MRBind::pb11::SpecificPybindType<pybind11::enum_<MRBIND_IDENTITY qualname_>> &>(_pb11_b).type; \
            DETAIL_MB_PB11_MAKE_ENUM_ELEMS(qualname_, elems_); \
        }, \
        std::unordered_set<std::type_index>{} \
    ); \

// This generates the aggregate constructor for a class if needed.
// First we check if the class is actually an aggregate, and additionally we reject any classes with bases (for simplicity, for now).
// If all conditions pass, we call `TryAddCtor(...)` with the correct arguments.
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR(is_aggregate_, bases_, members_) MRBIND_CAT(DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_A_,is_aggregate_)(members_, bases_)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_A_0(...)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_A_1(members_, .../*bases_*/) MRBIND_CAT(DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_B_,__VA_OPT__(1))(members_)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_B_1(...)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_B_(...) __VA_OPT__(DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_C(__VA_ARGS__))
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_C(members_) \
    (MRBind::pb11::TryAddAggregateCtor< \
        /* Non-static data member types: */\
        MRBIND_STRIP_LEADING_COMMA( SF_FOR_EACH1(DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY, SF_NULL, SF_NULL,, members_) ) \
    >)( \
        _pb11_c \
        /* Non-static data member names: (note, no comma before this) */\
        SF_FOR_EACH1(DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY, SF_NULL, SF_NULL,, members_) \
        , "Implicit aggregate constructor." \
    );
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY(n, d, kind_, ...) MRBIND_CAT(DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY_, kind_)(__VA_ARGS__)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY_ctor(...)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY_method(...)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY_conv_op(...)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY_field(static_, type_, name_, fullname_, comment_) MRBIND_CAT(DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY_field_,static_)(type_)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY_field_static(type_)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY_field_(type_) , MRBIND_IDENTITY type_
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY(n, d, kind_, ...) MRBIND_CAT(DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY_, kind_)(__VA_ARGS__)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY_ctor(...)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY_method(...)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY_conv_op(...)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY_field(static_, type_, name_, fullname_, comment_) MRBIND_CAT(DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY_field_,static_)(name_)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY_field_static(name_)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY_field_(name_) , pybind11::arg(MRBind::pb11::AdjustPythonKeywords(MRBIND_STR(name_)).c_str())


// Bind a class.
#define MB_CLASS(kind_, name_, qualname_, ns_stack_, is_aggregate_, comment_, bases_, members_) \
    MRBind::pb11::GetRegistry().type_entries.try_emplace( \
        typeid(MRBIND_IDENTITY qualname_), \
        /* Is parsed? */\
        true, \
        /* Parent namespace or class. */\
        typeid(_pb11_this_ns), \
        /* Comment: */\
        DETAIL_MB_PB11_COMMENT_PTR(comment_), \
        /* Emit docstrings? */\
        true, \
        /* C++ type name: */\
        MRBIND_STR(MRBIND_IDENTITY qualname_), \
        /* Init lambda. */\
        +[](MRBind::pb11::ModuleOrClassRef _pb11_m, const char *_pb11_n) -> std::unique_ptr<MRBind::pb11::BasicPybindType> \
        { \
            using _pb11_C = MRBIND_IDENTITY qualname_; \
            using _pb11_T = MRBind::pb11::SpecificPybindType<pybind11::class_<_pb11_C, MRBind::pb11::SelectPybindHolder<_pb11_C> DETAIL_MB_PB11_BASE_TYPES(bases_)>>; \
            return std::make_unique<_pb11_T>(*_pb11_m.handle, _pb11_n); \
        }, \
        /* Members lamdba. */\
        +[](MRBind::pb11::BasicPybindType &_pb11_b, MRBind::pb11::TypeEntry::AddClassMembersState &_pb11_state, [[maybe_unused]] MRBind::pb11::FuncAliasRegistrationFuncs *_pb11_func_alias_registration_funcs) \
        { \
            using _pb11_C = MRBIND_IDENTITY qualname_; \
            using _pb11_T = MRBind::pb11::SpecificPybindType<pybind11::class_<_pb11_C, MRBind::pb11::SelectPybindHolder<_pb11_C> DETAIL_MB_PB11_BASE_TYPES(bases_)>>; \
            auto &_pb11_c = static_cast<_pb11_T *>(&_pb11_b)->type; \
            DETAIL_MB_PB11_DISPATCH_MEMBERS(qualname_, members_) \
            /* Finalize at the end of pass 1, before adding greedy function overloads accepting `pybind11::object` (like iostreams). */\
            if (_pb11_state.pass_number == 1) \
            { \
                (MRBind::pb11::FinalizeClass<_pb11_C>)(_pb11_c, _pb11_state.func_scope_state); \
                /* Add the aggregate constructor if needed. */\
                DETAIL_MB_PB11_ADD_AGGREGATE_CTOR(is_aggregate_, bases_, members_) \
            } \
        }, \
        MRBind::pb11::MakeBaseTypeids<MRBIND_STRIP_LEADING_COMMA(DETAIL_MB_PB11_BASE_TYPES(bases_))>() \
    ); \
    \
    { \
        using _pb11_this_ns [[maybe_unused]] = MRBIND_IDENTITY qualname_; \

#define MB_END_CLASS(name_) \
    }

// A helper for `MB_CLASS` that handles different kinds of class members.
#define DETAIL_MB_PB11_DISPATCH_MEMBERS(classname, seq) SF_FOR_EACH1(DETAIL_MB_PB11_DISPATCH_MEMBERS_BODY, SF_STATE, SF_NULL, classname, seq)
#define DETAIL_MB_PB11_DISPATCH_MEMBERS_BODY(n, d, kind_, ...) \
    MRBIND_CAT(DETAIL_MB_PB11_DISPATCH_MEMBER_, kind_)(d, __VA_ARGS__)

// A helper for `DETAIL_MB_PB11_DISPATCH_MEMBERS` that generates a field.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_field(qualname_, static_, type_, name_, fullname_, comment_) \
    if (_pb11_state.pass_number == 0) \
    MRBind::pb11::MRBIND_CAT(DETAIL_MB_PB11_IF_STATIC_,static_)(TryAddMemberVarStatic, TryAddMemberVar)< \
        /* Accessor lambda or pointer. */\
        MRBIND_CAT(DETAIL_MB_PB11_DISPATCH_MEMBER_field_LAMBDA_,static_)(qualname_, fullname_),\
        /* Type. */\
        MRBIND_IDENTITY type_ \
    >(\
        _pb11_c,\
        /* Name. */\
        MRBind::pb11::ToPythonName(MRBIND_STR(MRBIND_IDENTITY fullname_)).c_str()\
        /* Comment, if any. */\
        MRBIND_PREPEND_COMMA(comment_)\
    );

#define DETAIL_MB_PB11_DISPATCH_MEMBER_field_LAMBDA_(class_qualname_, fullname_) [](_pb11_C &_pb11_o)->auto&&{return _pb11_o.MRBIND_IDENTITY fullname_;}
#define DETAIL_MB_PB11_DISPATCH_MEMBER_field_LAMBDA_static(class_qualname_, fullname_) &(MRBIND_IDENTITY class_qualname_::MRBIND_IDENTITY fullname_)

#define DETAIL_MB_PB11_DISPATCH_MEMBER_ctor(...) DETAIL_MB_PB11_DISPATCH_MEMBER_ctor_0(__VA_ARGS__) // Need an extra level of nesting for the Clang's dumb MSVC preprocessor imitation.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_ctor_0(qualname_, explicit_, copy_move_kind_, comment_, params_) \
    MRBind::pb11::TryAddCtor<\
        /* Copy/move kind. */\
        MRBind::pb11::CopyMoveKind::copy_move_kind_, \
        /* Default argument counter, to detect converting constructors. */\
        DETAIL_MB_PB11_NUM_DEF_ARGS(params_),\
        /* Explicit? */\
        MRBIND_CAT(DETAIL_MB_PB11_IF_EXPLICIT_, explicit_)()\
        /* Parameter types. */\
        DETAIL_MB_PB11_PARAM_ENTRIES_WITH_LEADING_COMMA(params_)\
    >( \
        _pb11_c, \
        &_pb11_state.func_scope_state, _pb11_state.pass_number \
        /* Parameters. */\
        DETAIL_MB_PB11_MAKE_PARAMS(params_) \
        /* Comment, if any. */\
        MRBIND_PREPEND_COMMA(comment_) \
    );

// A helper for `DETAIL_MB_PB11_DISPATCH_MEMBERS` that generates a method.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_method(qualname_, static_, assignment_kind_, ret_, name_, simplename_, fullname_, const_, comment_, params_) \
    MRBind::pb11::TryAddFunc< \
        /* Is this function static? */\
        MRBind::pb11::FuncKind:: MRBIND_CAT(DETAIL_MB_PB11_IF_STATIC_, static_)(nonmember_or_static, member_nonstatic),\
        /* Member pointer. */\
        /* Cast to the correct type to handle overloads correctly. Interestingly, the cast can cast away `noexcept` just fine. I don't think we care about it? */\
        static_cast<std::type_identity_t<MRBIND_IDENTITY ret_>(MRBIND_CAT(DETAIL_MB_PB11_IF_STATIC_, static_)(,MRBIND_IDENTITY qualname_::)*)(DETAIL_MB_PB11_PARAM_TYPES(params_)) const_>(&MRBIND_IDENTITY qualname_:: name_) \
        /* Parameter types: */\
        /* Self parameter. */\
        MRBIND_CAT(DETAIL_MB_PB11_IF_STATIC_, static_)(,MRBIND_COMMA() _pb11_C &)\
        /* Normal parameter types. */\
        DETAIL_MB_PB11_PARAM_ENTRIES_WITH_LEADING_COMMA(params_) \
    >( \
        _pb11_c, \
        /* Simple name */\
        MRBIND_STR(simplename_), \
        /* Full name */\
        MRBIND_STR(name_), \
        /* Full name with template arguments. */\
        MRBIND_STR(MRBIND_IDENTITY fullname_), \
        /* Pybind signature. */\
        DETAIL_MB_PB11_PARAM_PB_SIGNATURE(params_), \
        /* State information. */\
        &_pb11_state.NextFuncState(), &_pb11_state.func_scope_state, _pb11_state.pass_number, \
        /* Func alias information. */\
        _pb11_func_alias_registration_funcs, \
        /* Pybind extras: */\
        [](auto _pb11_f){_pb11_f(MRBIND_STRIP_LEADING_COMMA( \
            /* Parameters. */\
            DETAIL_MB_PB11_MAKE_PARAMS(params_) \
            /* Comment, if any. */ \
            MRBIND_PREPEND_COMMA(comment_) \
        ));} \
    );

// A helper for `DETAIL_MB_PB11_DISPATCH_MEMBERS` that generates a conversion function.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_conv_op(qualname_, ret_, const_, comment_) \
    if (_pb11_state.pass_number == 0) \
    MRBind::pb11::TryAddFuncSimple< \
        /* Not static. */\
        MRBind::pb11::FuncKind::member_nonstatic,\
        /* Member pointer. */\
        /* Cast to the correct type to handle overloads correctly. Interestingly, the cast can cast away `noexcept` just fine. I don't think we care about it? */\
        static_cast<std::type_identity_t<MRBIND_IDENTITY ret_>(MRBIND_IDENTITY qualname_::*)() const_>(&MRBIND_IDENTITY qualname_::operator MRBIND_IDENTITY ret_), \
        /* The only parameter, which is the class itself. */\
        _pb11_C & \
    >( \
        _pb11_c, \
        /* Operator name. */\
        MRBind::pb11::GetConversionFuncName<MRBIND_IDENTITY ret_>(MRBIND_STR(MRBIND_IDENTITY ret_)).c_str(), \
        /* Func alias information. */\
        _pb11_func_alias_registration_funcs, \
        /* Pybind extras: */\
        [](auto _pb11_f){_pb11_f( \
            /* Comment, if any. */ \
            comment_ \
        );} \
    );

#define MB_REGISTER_TYPE(i_, ...) \
    /* Just in case, register identity spelling. */\
    MB_ALT_TYPE_SPELLING(i_, (__VA_ARGS__), (__VA_ARGS__));

#define MB_REGISTER_TYPE_RETURNED(i_, ...) (void)MRBind::pb11::RegisterReturnType<__VA_ARGS__>{};
#define MB_REGISTER_TYPE_PARAM(i_, ...)    (void)MRBind::pb11::RegisterParamType<__VA_ARGS__>{};
#define MB_REGISTER_TYPE_PARSED(i_, ...)   (void)MRBind::pb11::RegisterTypesWithCustomBindingIfApplicable<__VA_ARGS__>{};
#define MB_REGISTER_TYPE_BASE(i_, ...)                  MB_REGISTER_TYPE_PARSED(i_, __VA_ARGS__)
#define MB_REGISTER_TYPE_NONSTATIC_DATA_MEMBER(i_, ...) (void)MRBind::pb11::RegisterFieldType<__VA_ARGS__>{};
#define MB_REGISTER_TYPE_STATIC_DATA_MEMBER(i_, ...)    (void)MRBind::pb11::RegisterFieldType<__VA_ARGS__>{};
#define MB_REGISTER_TYPE_TYPEDEF_TARGET(i_, ...)        MB_REGISTER_TYPE_PARSED(i_, __VA_ARGS__)

#define MB_ALT_TYPE_SPELLING(i_, type_, spelling_) \
    MRBind::pb11::RegisterTypeAlias<MRBIND_IDENTITY type_>(MRBIND_STR(MRBIND_IDENTITY spelling_));


// Add missing macros.
#include <mrbind/helpers/define_missing_macros.h>

#endif
