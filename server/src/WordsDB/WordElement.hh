#pragma once

#include <cstring>

/**
 * @brief This struct includes english word, translate to russian and sentence with using example
 * 
 */
struct WordElement {
    const char* m_enWord;
    const char* m_ruWord;
    const char* m_example;

    friend bool operator== (const WordElement& first, const WordElement& second) {
        return  std::strcmp(first.m_enWord, second.m_enWord) ? false :
                std::strcmp(first.m_ruWord, second.m_ruWord) ? false :
                std::strcmp(first.m_example, second.m_example) ? false : true;
    }

    friend bool operator< (const WordElement& first, const WordElement& second) {
        return  std::strcmp(first.m_enWord, second.m_enWord) < 0 ? false :
                std::strcmp(first.m_ruWord, second.m_ruWord) < 0 ? false :
                std::strcmp(first.m_example, second.m_example) < 0 ? false : true;
    }
};