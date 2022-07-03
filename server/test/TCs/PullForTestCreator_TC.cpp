#include "../catch.hpp"
#include "../Utility/WordsPullStub.hh"
#include "../../src/PullForTestCreator/PullForTestCreator.hh"

TEST_CASE("Testing creation of words pull created by PullForTestCreator") {
    std::vector<WordElement> wordsPull = WordsPullStub::giveWordsPull();
    PullForTestCreator pullForTestCreator;
    auto testPull = pullForTestCreator.createPullForTest(wordsPull);

    SECTION("Checking that createPullForTest creates 8 elements pull") {
        CHECK(testPull.size() == 8); 
    }

    SECTION("Checking that all elements are unique") {
        for(int i = 0; i < 8; ++i)
        {
            CHECK(std::count(testPull.begin(), testPull.end(), testPull[i]) == 1);
        }
    }
}
