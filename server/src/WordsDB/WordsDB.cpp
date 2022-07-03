#include "WordsDB.hh"
#include "../../test/Utility/WordsDBStub.hh"

WordsDB* WordsDB::m_instance = nullptr;

WordsDB* WordsDB::getInstance() {
    if(m_instance != nullptr)
        return m_instance;
    
    m_instance = new WordsDB();
    return m_instance;
}

std::vector<WordElement> WordsDB::createWordsPull(uint64_t s_topicMask) {
    std::vector<WordElement> wordsPullTemp;

    for(int i = 0; i < m_wordsDB.size(); ++i)
    {
        // Create flag
        uint64_t topicMask = 1 << i;

        // Check flag
        if((s_topicMask & topicMask) == topicMask)
        {
            addTopic(wordsPullTemp, i);
        }
    }

    return wordsPullTemp;
}

void WordsDB::addTopic(std::vector<WordElement>& s_pullWords, u_int s_topicIndex) {
    for(auto i : m_wordsDB[s_topicIndex])
    {
        s_pullWords.push_back(i);
    }
}

WordsDB::WordsDB() :
// Warrning: every topic should contain at least 8 words
#ifdef PRODUCTION
    m_wordsDB {{}}    // refactor
#else
    m_wordsDB {WordsDBStub::giveWordsDB()}
#endif
{};

