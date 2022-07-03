#include <vector>
#include "../../src/WordsDB/WordElement.hh"

struct WordsDBStub {
    static const std::vector<std::vector<WordElement>> giveWordsDB() {
        return {
            // topic 1. - every day
            {
                {"everyDay1", "ruword", "example setnence"},
                {"everyDay2", "ruword", "example setnence"},
                {"everyDay3", "ruword", "example setnence"},
                {"everyDay4", "ruword", "example setnence"},
                {"everyDay5", "ruword", "example setnence"},
                {"everyDay6", "ruword", "example setnence"},
                {"everyDay7", "ruword", "example setnence"},
                {"everyDay8", "ruword", "example setnence"},
                {"everyDay9", "ruword", "example setnence"},
                {"everyDay10", "ruword", "example setnence"},
                {"everyDay11", "ruword", "example setnence"}
            },
            // topic 2. sport
            {
                {"workout1", "ruword", "example setnence"},
                {"workout2", "ruword", "example setnence"},
                {"workout3", "ruword", "example setnence"},
                {"workout4", "ruword", "example setnence"},
                {"workout5", "ruword", "example setnence"},
                {"workout6", "ruword", "example setnence"},
                {"workout7", "ruword", "example setnence"},
                {"workout8", "ruword", "example setnence"},
                {"workout9", "ruword", "example setnence"},
                {"workout10", "ruword", "example setnence"},
                {"workout11", "ruword", "example setnence"},
                {"workout12", "ruword", "example setnence"},
                {"workout13", "ruword", "example setnence"}
            },
            // topic 3. IT
            {
                {"it1", "ruword", "example setnence"},
                {"it2", "ruword", "example setnence"},
                {"it3", "ruword", "example setnence"},
                {"it4", "ruword", "example setnence"},
                {"it5", "ruword", "example setnence"},
                {"it6", "ruword", "example setnence"},
                {"it7", "ruword", "example setnence"},
                {"it8", "ruword", "example setnence"},
                {"it9", "ruword", "example setnence"},
                {"it10", "ruword", "example setnence"},
                {"it11", "ruword", "example setnence"},
                {"it12", "ruword", "example setnence"}
            }
        };  // vector end
    }   // giveWordsDB end
};