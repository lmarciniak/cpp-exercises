#include "wordreplacer.h"
#include <fstream>
#include <iostream>
#include <sstream>

WordReplacer::WordReplacer(std::string path)
{
    this->m_size = 0;
    std::fstream file;
    file.open(path, std::ios_base::in);
    if (file.is_open()) {
        std::string str;
        while (file >> str)
            this->m_size++;
        this->m_words = new std::string[this->m_size];
        file.clear();
        file.seekg(0);
        int i = 0;
        while (file >> str)
            this->m_words[i++] = str;
    }
    file.close();
}

WordReplacer::~WordReplacer()
{
    delete [] this->m_words;
}

void WordReplacer::replace(unsigned int pos_a, unsigned int pos_b)
{
    pos_a--; pos_b--;
    if (pos_a < this->m_size && pos_b < this->m_size) {
        std::string buffer = this->m_words[pos_a];
        this->m_words[pos_a] = this->m_words[pos_b];
        this->m_words[pos_b] = buffer;
    }
}

std::string WordReplacer::text() const
{
    std::stringstream ss;
    for (int i = 0; i < this->m_size; i++) {
        ss << this->m_words[i] << " ";
    }
    return ss.str();
}
