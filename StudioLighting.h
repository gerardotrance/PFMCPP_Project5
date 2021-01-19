#pragma once 
#include "LeakedObjectDetector.h"
#include "FishTank.h"


struct StudioLighting
{
    FishTank aquarium;
    
    StudioLighting();
    ~StudioLighting();

    JUCE_LEAK_DETECTOR(StudioLighting)
};
