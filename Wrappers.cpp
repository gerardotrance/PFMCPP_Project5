

MidiKeyboardWrapper::MidiKeyboardWrapper
{
    MidiKeyboardWrapper(MidiKeyboard* midiKeyboardPointer)  : midiKeyboardPtr(midiKeyboardPointer){}
    ~MidiKeyboardWrapper()
    {
        delete midiKeyboardPtr;
    }
    
    MidiKeyboard* midiKeyboardPtr = nullptr;

}

LaptopWrapper::LaptopWrapper
{
    LaptopWrapper(Laptop* laptopPointer) : laptopPtr(laptopPointer){}
    ~LaptopWrapper()
    {
        delete laptopPtr;
    }
    
    Laptop* laptopPtr = nullptr;
}

FishTankWrapper::FishTankWrapper
{
    FishTankWrapper(FishTank* fishTankPointer) : fishTankPtr(fishTankPointer){}
    ~FishTankWrapper()
    {
        delete fishTankPtr;
    }
    
    FishTank* fishTankPtr = nullptr;
}

MusicStudioWrapper::MusicStudioWrapper
{
    MusicStudioWrapper(MusicStudio* musicStudioPointer) : musicStudioPtr(musicStudioPointer){}
    ~MusicStudioWrapper()
    {
        delete musicStudioPtr;
    }
    
    MusicStudio* musicStudioPtr = nullptr;
}

StudioLightingWrapper::StudioLightingWrapper
{
    StudioLightingWrapper(StudioLighting* studioLightingPointer) : studioLightingPtr(studioLightingPointer){}
    ~StudioLightingWrapper()
    {
        delete studioLightingPtr;
    }
    
    StudioLighting* studioLightingPtr = nullptr;
}