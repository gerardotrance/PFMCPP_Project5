#include "MidiKeyboard.h"
#include "Laptop.h"
#include "FishTank.h"
#include "MusicStudio.h"
#include "StudioLighting.h"
#include "Wrappers.h"
 

MidiKeyboardWrapper::MidiKeyboardWrapper(MidiKeyboard* midiKeyboardPointer) : midiKeyboardPtr(midiKeyboardPointer){} 
    
MidiKeyboardWrapper::~MidiKeyboardWrapper() 
{
    delete midiKeyboardPtr;
}


LaptopWrapper::LaptopWrapper(Laptop* laptopPointer) : laptopPtr(laptopPointer){} 
    
LaptopWrapper::~LaptopWrapper()
{
    delete laptopPtr;
}
    

FishTankWrapper::FishTankWrapper(FishTank* fishTankPointer) : fishTankPtr(fishTankPointer){}
    
FishTankWrapper::~FishTankWrapper() 
{
    delete fishTankPtr;
}
    

MusicStudioWrapper::MusicStudioWrapper(MusicStudio* musicStudioPointer) : musicStudioPtr(musicStudioPointer){}
    
MusicStudioWrapper::~MusicStudioWrapper()
{
    delete musicStudioPtr;
}
    

StudioLightingWrapper::StudioLightingWrapper(StudioLighting* studioLightingPointer) : studioLightingPtr(studioLightingPointer){}
    
    
StudioLightingWrapper::~StudioLightingWrapper()
{
    delete studioLightingPtr;
}
    

