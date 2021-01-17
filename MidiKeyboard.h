#pragmaonce

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

    MidiKeyboard();
    ~MidiKeyboard(){}

    void mkFunc();

    JUCE_LEAK_DETECTOR(MidiKeyboard)
};

