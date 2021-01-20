#pragma once

#include "LeakedObjectDetector.h"


struct FishTank
{
    int waterTempCelcius = 25;
    int heightCm = 30;
    int lengthCm = 90;
    int gallons = 50;
    bool lightOn = true;
    int corals;

    FishTank();
    ~FishTank();


    struct Decor
    
    {
        bool livePlants = true;
        int numberOfPlants = 6;
        int numberOfCorals = 0;
        bool rocks = true;
        int numberOfRocks = 5;
        
        void cleanDecor();

    };

    void switchLightOn(bool lightOn);
    void switchHeaterOn();
    void feedFish(int gallons);
    void printTemp();
    int tempAlert();
    void coralLighting();
    
    JUCE_LEAK_DETECTOR(FishTank) 
};
