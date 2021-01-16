
#include"FishTank.h"


FishTank::FishTank() : waterTempCelcius(24), gallons(75), corals(12){}

int FishTank::tempAlert()
{
    while(waterTempCelcius < 30)
    {
        std::cout << "temperature too low " << waterTempCelcius << " degrees celcius"  << std::endl;

        waterTempCelcius += 1;
    }
    
    while(waterTempCelcius == 30)
    {
        std::cout << "safe water temperature " << waterTempCelcius << " degrees celcius" << std::endl;

        return 0;
    }
    
    return waterTempCelcius;

}

void FishTank::printTemp()
{
    std::cout << waterTempCelcius << " is the current temperature in the Aquarium." << std::endl;
}

void FishTank::switchLightOn(bool lighting)
{
    lightOn = lighting;

    std::cout << "light is on" << std::endl;
}

void FishTank::switchHeaterOn()
{
    if(waterTempCelcius > 25)
    {
        std::cout << "Marine Aquarium" << std::endl;
    }
    
    else
    {
        std::cout << "Tropical Aquarium" << std::endl;
    }
}

void FishTank::feedFish(int aquariumSize)
{
    gallons = aquariumSize;

    if(gallons <= 50)
    {
        std::cout << "feed fish once a week" << std::endl;  
    }

    if(gallons <= 100 || gallons > 50)
    {
        std::cout << "feed fish twice a week" << std::endl;
    }

    else
    {
        std::cout << "feed fish at least three times a week" << std::endl;
    }        
}
