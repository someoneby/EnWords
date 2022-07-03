#include <algorithm>
#include "PacketCreator.hh"

std::string PacketCreator::createPacket(std::vector<WordElement*>& s_wordsPull) {
    std::string packetFromPull;

    // Add correct variant to packet
    packetFromPull += s_wordsPull.at(0)->m_ruWord;
    packetFromPull += ";";
    packetFromPull += s_wordsPull.at(0)->m_example;
    packetFromPull += ";";
    packetFromPull += s_wordsPull.at(0)->m_enWord;
    packetFromPull += ";";

    // Delete added variant for O(1) 
    std::swap(s_wordsPull[0], s_wordsPull[s_wordsPull.size() - 1]);
    s_wordsPull.erase(s_wordsPull.end() - 1);

    // Fill packet with incorrect words
    for(auto i : s_wordsPull)
    {
        packetFromPull += i->m_enWord;
        packetFromPull += ";";
    }

    return packetFromPull;
}