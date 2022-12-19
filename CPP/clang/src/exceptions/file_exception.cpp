#include <cerrno>
#include <cstring>

#include "file_exception.h"

//namespace Exceptions {

Exceptions::FileException::FileException(const char *fn, const char *cmt)
{
    err_code = errno;
    filename = strdup(fn);
    comment = strdup(cmt);
}

Exceptions::FileException::FileException(const FileException& other)
{
    err_code = other.err_code;
    filename = strdup(other.filename);
    comment = strdup(other.comment);
}

Exceptions::FileException::~FileException()
{
    delete[] filename;
    delete[] comment;
}

char* Exceptions::FileException::strdup(const char *str)
{
    char *res = new char[strlen(str)+1];
    strcpy(res, str);
    return res;
}

//}
