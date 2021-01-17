#include"Wrappers.h"

struct MidiKeyboard
{
    int keys, pitch, modWheel;
    bool pitchWheel, keyPressed, grand;
    char address;

    void playMidiNotes(bool keyPressed);
    void changePitch(bool pitchWheel);
    void controlMacros(bool modWheel);
    void printKeys();
    int pitchShift();
    void mkFunc();

    MidiKeyboard();
    ~MidiKeyboard(){}

    JUCE_LEAK_DETECTOR(MidiKeyboard)
};

