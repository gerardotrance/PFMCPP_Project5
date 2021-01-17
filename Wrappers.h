

struct MidiKeyboardWrapper
{
    MidiKeyboardWrapper(MidiKeyboard* midiKeyboardPointer) : midiKeyboardPtr(midiKeyboardPointer){}
    ~MidiKeyboardWrapper()
    {
        delete midiKeyboardPtr;
    }
    
    MidiKeyboard* midiKeyboardPtr = nullptr;
};

struct LaptopWrapper
{
    LaptopWrapper(Laptop* laptopPointer) : laptopPtr(laptopPointer){}
    ~LaptopWrapper()
    {
        delete laptopPtr;
    }
    
    Laptop* laptopPtr = nullptr;
};

struct FishTankWrapper
{
    FishTankWrapper(FishTank* fishTankPointer) : fishTankPtr(fishTankPointer){}
    ~FishTankWrapper()
    {
        delete fishTankPtr;
    }
    
    FishTank* fishTankPtr = nullptr;
};

struct MusicStudioWrapper
{
    MusicStudioWrapper(MusicStudio* musicStudioPointer) : musicStudioPtr(musicStudioPointer){}
    ~MusicStudioWrapper()
    {
        delete musicStudioPtr;
    }
    
    MusicStudio* musicStudioPtr = nullptr;
};

struct StudioLightingWrapper
{
    StudioLightingWrapper(StudioLighting* studioLightingPointer) : studioLightingPtr(studioLightingPointer){}
    ~StudioLightingWrapper()
    {
        delete studioLightingPtr;
    }
    
    StudioLighting* studioLightingPtr = nullptr;
};
