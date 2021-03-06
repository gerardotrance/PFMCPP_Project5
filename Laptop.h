#pragma once

#include "LeakedObjectDetector.h" 

struct Laptop
{
    int screenResolution = 4000;
    bool keyboard = true;
    std::string password = "password";
    int hardDriveAvailableGb = 256;
    int hardDriveUsed = 512 - hardDriveAvailableGb;
    int memoryGb = 8;
    

    Laptop();
    ~Laptop();
    
    void resDescription();
    float produceOutput(bool screenResolution, int memoryGb);
    float saveData(int hardDriveAvailableGb);
    void hardDriveDetails();
    
    JUCE_LEAK_DETECTOR(Laptop)
};


