#include "FileReader.h"

FileReader::FileReader(const std::string& fname) {
    m_handler.open(fname, std::fstream::in);
}

FileReader::~FileReader(void) {
    m_handler.close();
}

auto FileReader::content(void) -> std::string {
    return {
        std::istreambuf_iterator<char>(m_handler),
        std::istreambuf_iterator<char>()
    };
}