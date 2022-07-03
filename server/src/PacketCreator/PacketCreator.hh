#pragma once

#include <iostream>
#include <vector>
// #include <WordElement.hh>
#include "../WordsDB/WordElement.hh"

// class WordElement;

class PacketCreator {
    static std::string createPacket(std::vector<WordElement*>);
};