#include <cstdio>

#include "lines.h"
#include "file_exception.h"

unsigned int Lines::line_count_in_file(const char* file_name)
{
    FILE* f = fopen(file_name, "r");
    if (!f)
        throw Exceptions::FileException(file_name, "couldn't open for line counting");
    int n = 0;
    int c = 0;
    while ((c = fgetc(f)) != EOF)
        if (c == '\n')
            n++;
    fclose(f);
    return n;
}
