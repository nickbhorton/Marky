#include <iostream>

void usage() {
    std::cout << "usage: ./markyhtml [filename.mrky]\n"; 
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        usage();
    }
}