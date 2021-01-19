#include "Laptop.h"
#include<iostream>



Laptop::Laptop()
{
    screenResolution = 8000;
    keyboard = true;
    password = "new password";
    hardDriveAvailableGb = 256;
    hardDriveUsed = 256;
    memoryGb = 16;    
}

void Laptop::hardDriveDetails()
{
    std::cout << hardDriveAvailableGb << " Giga Bytes HD storage." << std::endl;
    
    if(hardDriveAvailableGb < 512)
    {
        std::cout << "you have used " << hardDriveUsed << " Giga Bytes of storage space." << std::endl;
    }

    while(hardDriveUsed > 0)
    {
        std::cout << " UPDATE PROCESSING " << hardDriveUsed << " GigaBytes used" << std::endl;
        hardDriveUsed -= 16;
    }

    std::cout << "Hard Disk Ready To Use!" << std::endl;    

}

float Laptop::produceOutput(bool graphics, int RAM)
{
    screenResolution = graphics;
    memoryGb = RAM;

    return(memoryGb);
}

float Laptop::saveData(int storage)
{ 
    hardDriveAvailableGb = storage;
    
    return(hardDriveAvailableGb);
}

void Laptop::resDescription()
{
    std::cout << screenResolution << " is the screen resolution of the screen." << std::endl;
    std::cout << this << " is the address of Laptop " << std::endl;
}
