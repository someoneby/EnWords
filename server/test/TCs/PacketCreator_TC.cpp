#include "../catch.hpp"
#include "../../src/PacketCreator/PacketCreator.hh"

TEST_CASE("Testing packet created by PacketCreator") {
    WordElement w1 {"English Word1", "Russian translate1", "Example setnence1"};
    WordElement w2 {"English Word2", "Russian translate2", "Example setnence2"};
    WordElement w3 {"English Word3", "Russian translate3", "Example setnence3"};
    WordElement w4 {"English Word4", "Russian translate4", "Example setnence4"};
    WordElement w5 {"English Word5", "Russian translate5", "Example setnence5"};
    WordElement w6 {"English Word6", "Russian translate6", "Example setnence6"};
    WordElement w7 {"English Word7", "Russian translate7", "Example setnence7"};
    WordElement w8 {"English Word8", "Russian translate8", "Example setnence8"};

    std::vector<WordElement*> wordsPull { &w1, &w2, &w3, &w4, &w5, &w6, &w7, &w8 };


    SECTION("Check string created by PacketCreator") {
        std::string packet = PacketCreator::createPacket(wordsPull);
        
        CHECK(packet == "Russian translate1;Example setnence1;English Word1;English Word8;English Word2;English Word3;English Word4;English Word5;English Word6;English Word7;");
    }
}