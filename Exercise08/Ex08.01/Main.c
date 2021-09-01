#include "miniz.h"
#include "Functions.h"
#include <stdio.h>

int main(size_t argc, char *argv[])
{
    mz_zip_reader_extract_file_to_file();

    return 0;
}