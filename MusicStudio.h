#pragmaonce

struct MusicStudio
{
    MidiKeyboard midiKeyboard;
    Laptop laptop;
    
    MusicStudio(){}
    ~MusicStudio(){}

    JUCE_LEAK_DETECTOR(MusicStudio)
};