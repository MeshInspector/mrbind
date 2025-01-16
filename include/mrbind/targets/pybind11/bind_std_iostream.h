#pragma once

#include <optional>
#include <ostream>
#include <sstream>

// Adjust `std::ostream &` parameters to accept Python file handles instead.

namespace MRBind::pb11
{
    // OUTPUT streams

    class OstreamBuf : public std::stringbuf
    {
      public:
        pybind11::object py_file;

        OstreamBuf(pybind11::object new_py_file)
            : py_file(std::move(new_py_file))
        {
            if (!pybind11::hasattr(py_file, "write") || !pybind11::hasattr(py_file, "flush"))
                throw std::runtime_error("This is not a writable file handle.");

            py_write_func = py_file.attr("write");
            py_flush_func = py_file.attr("flush");

            is_text = PyObject_IsSubclass((PyObject *)Py_TYPE(py_file.ptr()), pybind11::module_::import("io").attr("TextIOBase").ptr());
        }
        OstreamBuf(const OstreamBuf &) = delete;
        OstreamBuf &operator=(const OstreamBuf &) = delete;
        ~OstreamBuf()
        {
            sync();
        }

        int sync() override
        {
            if (is_text)
            {
                py_write_func(this->str());
            }
            else
            {
                pybind11::bytes bytes = pybind11::bytes(this->str());
                py_write_func(bytes);
            }
            py_flush_func();
            return 0;
        }

      private:
        bool is_text = false;
        pybind11::object py_write_func;
        pybind11::object py_flush_func;
    };

    struct OstreamHolder
    {
        OstreamBuf buf;
        std::ostream stream;

        OstreamHolder(pybind11::object &&object) : buf(std::move(object)), stream(&buf) {}
    };

    // Adjust parameters.
    template <>
    struct ParamTraits<std::ostream &>
    {
        // Can't unlock GIL while doing this stuff.
        static constexpr GilHandling gil_handling = GilHandling::must_keep_locked;

        // Delay registration to have less priority during overload resolution.
        using register_late = void;

        using adjusted_param_type = pybind11::object;

        using unadjust_param_extra_param = std::optional<OstreamHolder>;

        static std::ostream &UnadjustParam(pybind11::object &&object, unadjust_param_extra_param &&holder)
        {
            holder.emplace(std::move(object));
            return holder->stream;
        }
    };

    // Adjust returned values.
    template <>
    struct ReturnTypeTraits<std::ostream &>
    {
        static pybind11::object Adjust(std::ostream &value)
        {
            if (auto ptr = dynamic_cast<OstreamBuf *>(value.rdbuf()))
                return ptr->py_file;
            else
                return pybind11::none();
        }
    };


    // INPUT streams

    class IstreamBuf : public std::stringbuf
    {
      public:
        pybind11::object py_file;

        IstreamBuf(pybind11::object new_py_file)
            : py_file(std::move(new_py_file))
        {
            if (!pybind11::hasattr(py_file, "seek") || !pybind11::hasattr(py_file, "tell") || !pybind11::hasattr(py_file, "read"))
                throw std::runtime_error("This is not a readable file handle.");

            python_seek_func = py_file.attr("seek");
            python_tell_func = py_file.attr("tell");
            python_read_func = py_file.attr("read");

            // Determine the file size.
            auto old_pos = python_tell_func().cast<std::streamsize>();
            file_size = python_seek_func(0, 2).cast<std::streamsize>();
            python_seek_func(old_pos); // Preserve the old position.
        }
        IstreamBuf(const IstreamBuf &) = delete;
        IstreamBuf &operator=(const IstreamBuf &) = delete;
        ~IstreamBuf() {}

        virtual std::streamsize showmanyc() override
        {
            std::streamsize cur_pos = python_tell_func().cast<std::streamsize>();
            return file_size - cur_pos;
        }

        virtual std::streamsize xsgetn(char* elem, std::streamsize count) override
        {
            count = std::min(showmanyc(), count);
            if (count == 0)
                return 0;
            std::string readBytes = python_read_func(count).cast<std::string>();
            std::copy(readBytes.c_str(), readBytes.c_str() + count, elem);
            return count;
        }

        virtual int_type underflow() override
        {
            std::streamsize cur_pos = python_tell_func().cast<std::streamsize>();
            auto res = uflow();
            if (res == std::streambuf::traits_type::eof())
                return std::streambuf::traits_type::eof();
            python_seek_func(cur_pos);
            return res;
        }

        virtual int_type uflow() override
        {
            char c;
            auto numRead = xsgetn(&c, 1);
            if (numRead == 0)
                return std::streambuf::traits_type::eof();
            return std::streambuf::traits_type::to_int_type(c);
        }

        virtual pos_type seekoff(off_type off, std::ios_base::seekdir way, std::ios_base::openmode) override
        {
            std::streamsize cur_pos = python_tell_func().cast<std::streamsize>();
            std::streamsize req_pos = cur_pos + off;
            if (way == std::ios_base::beg)
                req_pos = off;
            else if (way == std::ios_base::end)
                req_pos = file_size + off;
            python_seek_func(req_pos);
            return req_pos;
        }

        virtual pos_type seekpos(pos_type pos, std::ios_base::ios_base::openmode) override
        {
            python_seek_func(std::streamsize(pos));
            return python_tell_func().cast<std::streamsize>();
        }

        virtual int_type pbackfail(int_type c) override
        {
            std::streamsize cur_pos = python_tell_func().cast<std::streamsize>();
            if (cur_pos == 0)
                return std::streambuf::traits_type::eof();
            python_seek_func(cur_pos - 1);
            return c;
        }

    private:
        pybind11::object python_seek_func;
        pybind11::object python_tell_func;
        pybind11::object python_read_func;
        std::streamsize file_size = 0;
    };

    struct IstreamHolder
    {
        IstreamBuf buf;
        std::istream stream;

        IstreamHolder(pybind11::object &&object) : buf(std::move(object)), stream(&buf) {}
    };

    // Adjust parameters.
    template <>
    struct ParamTraits<std::istream &>
    {
        // Delay registration to have less priority during overload resolution.
        using register_late = void;

        // Can't unlock GIL while doing this stuff.
        static constexpr GilHandling gil_handling = GilHandling::must_keep_locked;

        using adjusted_param_type = pybind11::object;

        using unadjust_param_extra_param = std::optional<IstreamHolder>;

        static std::istream &UnadjustParam(pybind11::object &&object, unadjust_param_extra_param &&holder)
        {
            holder.emplace(std::move(object));
            return holder->stream;
        }
    };

    // Adjust returned values.
    template <>
    struct ReturnTypeTraits<std::istream &>
    {
        static pybind11::object Adjust(std::istream &value)
        {
            if (auto ptr = dynamic_cast<IstreamBuf *>(value.rdbuf()))
                return ptr->py_file;
            else
                return pybind11::none();
        }
    };
}
