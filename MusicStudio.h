#pragma once
#include "MidiKeyboard.h"
#include "Laptop.h"
#include "LeakedObjectDetector.h"

struct MusicStudio
{
    MidiKeyboard midiKeyboard; 
    Laptop laptop;
    
    MusicStudio(); 
    ~MusicStudio(); 


    JUCE_LEAK_DETECTOR(MusicStudio)
};
