#pragma once

#include <array>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "../WordsDB/WordElement.hh"

class PullForTestCreator {
public:
    /**
     * @brief Create pull of words (1 correct and other fillers) for test
     * 
     * @param s_wordsPull vector of words from choosen topics
     * @return pull of words for test
     */
    std::vector<WordElement*> createPullForTest(std::vector<WordElement>& s_wordsPull);

    PullForTestCreator(): m_actualLastElementIndex {0} {
        std::srand(time(0));
    };
private:
    // size of actual values of wordsPull
    std::size_t m_actualLastElementIndex;

    /**
     * @brief Return a random integer from 0 to range inclusive
     * 
     * @param range max integer
     * @return random size_t in range
     */
    std::size_t takePosition(std::size_t s_range);

};