#include "MidiKeyboard.h"
#include"Wrappers.h"

struct MusicStudio
{
    MidiKeyboard midiKeyboard;
    Laptop laptop;
    
    MusicStudio(){}
    ~MusicStudio(){}

    JUCE_LEAK_DETECTOR(MusicStudio)
};