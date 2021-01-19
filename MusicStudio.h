#include "LeakedObjectDetector.h"


struct MusicStudio
{
    
    MusicStudio();
    ~MusicStudio();

    JUCE_LEAK_DETECTOR(MusicStudio)
};
