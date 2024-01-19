#ifndef MARKY_FILE_HEADER
#define MARKY_FILE_HEADER

#include <string>
#include <fstream>

class MarkyFile {
    struct Details {
        std::string file_path;
        std::ifstream stream;
    } details;
    MarkyFile() = default;
    MarkyFile(const MarkyFile& other) = delete;
    MarkyFile(MarkyFile&& other) noexcept = delete;

    MarkyFile& operator=(const MarkyFile& other) = delete;
    MarkyFile& operator=(MarkyFile&& other) noexcept = delete;

    explicit MarkyFile(Details d) : details(std::move(d)) {};

    public:
    MarkyFile create(std::string file_name);
};

#endif