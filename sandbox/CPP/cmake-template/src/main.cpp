#include <cstdio>
#include <cstring>

#include "file_exception.h"
#include "lines.h"

int main(int argc, char** argv)
{
    try {
        int res = Lines::line_count_in_file(argv[1]);
        printf("The file %s contains %d lines\n", argv[1], res);
    }
    catch (const Exceptions::FileException& ex) {
        fprintf(stderr, "File exception: %s (%s): %s\n", ex.get_name(), ex.get_comment(), strerror(ex.get_errno())); // beter use "errno_t strerror_s( char *buf, rsize_t bufsz, errno_t errnum );"
        return 1;
    }
}
