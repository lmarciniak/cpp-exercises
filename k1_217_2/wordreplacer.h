#ifndef WORDREPLACER_H
#define WORDREPLACER_H
#include <string>

class WordReplacer
{
private:
    std::string *m_words;
    int m_size;
public:
    WordReplacer(std::string path);
    ~WordReplacer();
    void replace(unsigned int pos_a, unsigned int pos_b);
    std::string text() const;
};

#endif // WORDREPLACER_H
