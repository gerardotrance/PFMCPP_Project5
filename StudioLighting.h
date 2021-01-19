#include "LeakedObjectDetector.h"

struct StudioLighting
{
    
    StudioLighting();
    ~StudioLighting();

    JUCE_LEAK_DETECTOR(StudioLighting)
};
