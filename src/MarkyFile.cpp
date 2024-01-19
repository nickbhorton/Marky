#include "MarkyFile.h"

MarkyFile MarkyFile::create(std::string file_name) {
    return MarkyFile(Details{
        .file_path = file_name,
    });
}