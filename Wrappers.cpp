#include "MidiKeyboard.h"
#include "Laptop.h"
#include "FishTank.h"
#include "MusicStudio.h"
#include "StudioLighting.h"
#include "Wrappers.h"
 

/*Wrappers.h is declaring `MidiKeyboard.  You need to remember how the #include directive works.   It literally copies the text from that file INTO whatever file you're including it. 
If you want MidiKeyboard to be an actual type before the Wrappers forward declaration of it, you need to include the file before Wrappers.h
*/
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
    

 
// FishTankWrapper::FishTankWrapper(FishTank* fishTankPointer) 
// {
FishTankWrapper::FishTankWrapper(FishTank* fishTankPointer) : fishTankPtr(fishTankPointer){}
    
FishTankWrapper::~FishTankWrapper() 
{
        delete fishTankPtr;
}
    
// }

// MusicStudioWrapper::MusicStudioWrapper(MusicStudio* musicStudioPointer)
// {
MusicStudioWrapper::MusicStudioWrapper(MusicStudio* musicStudioPointer) : musicStudioPtr(musicStudioPointer){}
    
MusicStudioWrapper::~MusicStudioWrapper()
{
        delete musicStudioPtr;
}
    
// }

// StudioLightingWrapper::StudioLightingWrapper(StudioLighting* studioLightingPointer)
// {
StudioLightingWrapper::StudioLightingWrapper(StudioLighting* studioLightingPointer) : studioLightingPtr(studioLightingPointer){}
    
    
StudioLightingWrapper::~StudioLightingWrapper()
{
        delete studioLightingPtr;
}
    
// }
