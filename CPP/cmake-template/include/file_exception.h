#ifndef FILE_EXCEPTION_H
#define FILE_EXCEPTION_H

namespace Exceptions {

    class FileException
    {
    private:
        int err_code;
        char* filename;
        char* comment;

    public:
        FileException(const char* fn, const char* cmt);
        FileException(const FileException& other);
        ~FileException();

        const char* get_name() const { return filename; }
        const char* get_comment() const { return comment; }
        int get_errno() const { return err_code; }

    private:
        static char* strdup(const char* str);

    };

}

#endif
