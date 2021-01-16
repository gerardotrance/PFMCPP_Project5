struct MusicStudio
{
    MidiKeyboard midiKeyboard;
     Laptop laptop;
    
    MusicStudio()
    {
        std::cout << "MusicStudio Constructor" << std::endl;
    }
    ~MusicStudio()
    {
        std::cout << "MusicStudio Destructor" << std::endl;
    }

    JUCE_LEAK_DETECTOR(MusicStudio)
};