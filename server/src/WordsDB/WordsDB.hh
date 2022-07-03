#pragma once

#include <iostream>
#include <vector>
#include "WordElement.hh"

class WordsDB {
public:
    /**
     * @brief Get the Instance of object
     * 
     * @return WordsDB* instance of object
     */
    static WordsDB* getInstance();

    /**
     * @brief This method creates datastructure of words from english topics provided by mask
     * 
     * @param uint64_t mask of topics
     * @return vector of words from topics provided by mask
    */
    std::vector<WordElement> createWordsPull(uint64_t s_topicMask);

private:
    static WordsDB* m_instance;

    // database of all words
    // Warrning: every topic should contain at least 8 words
    const std::vector<std::vector<WordElement>> m_wordsDB;  
    
    /**
     * @brief Adds words from topic by index to vector
     * 
     * @param s_pullWords vector to copy in
     * @param s_topicIndex index of topic to copy
     */
    void addTopic(std::vector<WordElement>& s_pullWords, u_int s_topicIndex);

    WordsDB();
    WordsDB(const WordsDB&) = delete;
    WordsDB(WordsDB&&) = delete;
};

