#include "../catch.hpp"
#include "../../src/WordsDB/WordsDB.hh"

TEST_CASE("Checking creation of words pull from WordsDB") {
    std::vector<WordElement> wordsPull;

    SECTION("Cheking mask with 1 and 3 topics") {
        wordsPull = WordsDB::getInstance()->createWordsPull((1 << 0) | (1 << 2));
        WordElement word_element1 {"everyDay1", "ruword", "example setnence"};
        WordElement word_element23 {"it12", "ruword", "example setnence"};

        CHECK(wordsPull.size() == 23);
        CHECK(wordsPull.at(0) == word_element1);
        CHECK(wordsPull.at(22) == word_element23);
    }

    SECTION("Cheking mask with 0 value") {
        wordsPull = WordsDB::getInstance()->createWordsPull(0);
        CHECK(wordsPull.size() == 0);
    }

    SECTION("Cheking mask bigger than exist topics 4") {
        wordsPull = WordsDB::getInstance()->createWordsPull(1 << 3);
        CHECK(wordsPull.size() == 0);
    }
}