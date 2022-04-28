#include "FileReader.h"

FileReader::FileReader(const string& fname) {
    m_handler.open(fname, fstream::in);
}

FileReader::~FileReader(void) {
    m_handler.close();
}

auto FileReader::content(void) -> string {
    return {
        std::istreambuf_iterator<char>(m_handler),
        std::istreambuf_iterator<char>()
    };
}