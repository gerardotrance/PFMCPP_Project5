#include "Wrappers.h"
struct MidiKeyboard;
struct Laptop;
struct FishTank;
struct MusicStudio;
struct StudioLighting;


MidiKeyboardWrapper::MidiKeyboardWrapper(MidiKeyboard* midiKeyboardPointer)
{
    MidiKeyboardWrapper(MidiKeyboard* midiKeyboardPointer) : midiKeyboardPtr(midiKeyboardPointer){}
    ~MidiKeyboardWrapper()
    {
        delete midiKeyboardPtr;
    }

}

LaptopWrapper::LaptopWrapper(Laptop* laptopPointer)
{
    LaptopWrapper(Laptop* laptopPointer) : laptopPtr(laptopPointer){}
    ~LaptopWrapper()
    {
        delete laptopPtr;
    }
    
}

FishTankWrapper::FishTankWrapper(FishTank* fishTankPointer)
{
    FishTankWrapper(FishTank* fishTankPointer) : fishTankPtr(fishTankPointer){}
    ~FishTankWrapper()
    {
        delete fishTankPtr;
    }
    
}

MusicStudioWrapper::MusicStudioWrapper(MusicStudio* musicStudioPointer)
{
    MusicStudioWrapper(MusicStudio* musicStudioPointer) : musicStudioPtr(musicStudioPointer){}
    ~MusicStudioWrapper()
    {
        delete musicStudioPtr;
    }
    
}

StudioLightingWrapper::StudioLightingWrapper(StudioLighting* studioLightingPointer)
{
    StudioLightingWrapper(StudioLighting* studioLightingPointer) : studioLightingPtr(studioLightingPointer){}
    ~StudioLightingWrapper()
    {
        delete studioLightingPtr;
    }
    
}
