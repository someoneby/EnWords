#include "PullForTestCreator.hh"
#include <set>
#include "../config.hh"

std::vector<WordElement*> PullForTestCreator::createPullForTest(std::vector<WordElement>& s_wordsPull) {
    std::vector<WordElement*> pullForTest;
    pullForTest.reserve(CONFIGURATION::QUESTION_WORDS_NUMBER);

    // initialize m_size if it's used for the first time
    if(m_actualLastElementIndex == 0)
        m_actualLastElementIndex = s_wordsPull.size() - 1;

    // take new element position for correct answer
    size_t position = takePosition(m_actualLastElementIndex);

    // swap choosen element with last actual element
    // take pointer to choosen element from it's new position
    // decrease the m_size of the actual elements to avoid repetition
    std::swap(s_wordsPull[position], s_wordsPull[m_actualLastElementIndex]);
    pullForTest.push_back(&s_wordsPull[m_actualLastElementIndex--]);

    // create the set of words that was used including correct word
    std::set<WordElement*> usedWords {pullForTest[0]};

    // fill pullForTest by incorrect answers
    for(int i = 0; i < CONFIGURATION::QUESTION_WORDS_NUMBER - 1; ++i)
    {
        // find element that is not used and add it to the set
        do { position = takePosition(s_wordsPull.size() - 1); }
        while (usedWords.emplace(&s_wordsPull[position]).second == false);
        
        pullForTest.push_back(&s_wordsPull[position]);
    }

    return pullForTest;
}

std::size_t PullForTestCreator::takePosition(std::size_t s_range) {
    return rand() % s_range;
}


