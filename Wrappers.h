
#pragma once

struct MidiKeyboard;
struct Laptop;
struct FishTank;
struct MusicStudio;
struct StudioLighting;


struct MidiKeyboardWrapper
{
    MidiKeyboardWrapper(MidiKeyboard* midiKeyboardPointer);
    ~MidiKeyboardWrapper();
    
    MidiKeyboard* midiKeyboardPtr = nullptr;
};

struct LaptopWrapper
{
    LaptopWrapper(Laptop* laptopPointer);
    ~LaptopWrapper();

    Laptop* laptopPtr = nullptr;
};

struct FishTankWrapper
{
    FishTankWrapper(FishTank* fishTankPointer);
    ~FishTankWrapper();

    FishTank* fishTankPtr = nullptr;
};

struct MusicStudioWrapper
{
    MusicStudioWrapper(MusicStudio* musicStudioPointer);
    ~MusicStudioWrapper();

    MusicStudio* musicStudioPtr = nullptr;
};

struct StudioLightingWrapper
{
    StudioLightingWrapper(StudioLighting* studioLightingPointer);
    ~StudioLightingWrapper();

    StudioLighting* studioLightingPtr = nullptr;
};
