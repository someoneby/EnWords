#pragma once

#include <iostream>
#include <vector>
#include "../WordsDB/WordElement.hh"

class PacketCreator {
public:
    /**
     * @brief Create a packet for sending to client
     * 
     * @param s_wordsPull pull of words for test
     * @return packet for sending to client
     */
    static std::string createPacket(std::vector<WordElement*>& s_wordsPull);
};