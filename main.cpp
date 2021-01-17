/*
 Project 5: Part 4 / 4
 video: Chapter 3 Part 7

 Create a branch named Part4
 
 Don't #include what you don't use
 
 1) Your task is to refactor your Chapter 3 Part 4 task into separate source and header files.
         Add files via the pane on the left.
 
 2) Put all of your declarations for each class in .h files
         One header file per class ( i.e. Raider.h for a class named "Raider" )
 
 3) Put all of your implementations in .cpp files.
         one cpp file per class ( i.e. Raider.cpp for a class named "Raider" )
 
 4) Put all of your Wrapper classes in a single Wrappers.h file
         if you implemented your wrapper class functions in-class, you'll need to move them to Wrappers.cpp
 
 5) NO IN-CLASS IMPLEMENTATION ALLOWED.
         the only exception is the existing Atomic.h and LeakedObjectDetector.h
 
 6) for every .cpp file you have to make, insert it into the .replit file after 'main.cpp'.  Don't forget the spaces between file names.
 If you need help with this step, send me a DM.
 
 7) click the [run] button.  Clear up any errors or warnings as best you can.
 
 Remember, your Chapter 3 Part 4 task worked when it was all in one file. so you shouldn't need to edit any of it.  
         just split it up into source files and provide the appropriate #include directives.
 */







/*
 copied UDT 1:
 */

/*
 copied UDT 2:
 */

/*
 copied UDT 3:
 */

/*
 new UDT 4:
 */



/*
 new UDT 5:
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include<iostream>
#include "LeakedObjectDetector.h"
#include "Laptop.h"
#include "FishTank.h"
#include "MusicStudio.h"
#include "MidiKeyboard.h"
#include "StudioLighting.h"
#include "Wrappers.h"

int main()
{   
    MidiKeyboardWrapper keyboardWrapper(new MidiKeyboard);
    keyboardWrapper.midiKeyboardPtr->printKeys();
    //Midikeyboard project 5 part2
    std::cout << keyboardWrapper.midiKeyboardPtr->pitch << " is the pitch" << std::endl;
    std::cout << &keyboardWrapper << " is the address of keyboard object." << std::endl;
    keyboardWrapper.midiKeyboardPtr->mkFunc();
    
    //
    LaptopWrapper myLaptopWrapper(new Laptop);
    //Laptop project 5 part2
    std::cout << myLaptopWrapper.laptopPtr->screenResolution << " is the resolution of the laptop screen." << std::endl;
    std::cout << &myLaptopWrapper << " is the address of the myLaptop object." << std::endl;
    myLaptopWrapper.laptopPtr->resDescription();
    //
    myLaptopWrapper.laptopPtr->hardDriveDetails();
    FishTankWrapper aquariumWrapper(new FishTank);
    //Fishtank project 5 part2
    std::cout << aquariumWrapper.fishTankPtr->corals << "is the number of corals in this aquarium." << std::endl;
    std::cout << &aquariumWrapper << " is the address of the aquarium object." << std::endl;
    aquariumWrapper.fishTankPtr->coralLighting();
    //
    aquariumWrapper.fishTankPtr->printTemp();
    std::cout << aquariumWrapper.fishTankPtr->waterTempCelcius << std::endl;
    std::cout << aquariumWrapper.fishTankPtr->gallons << std::endl;
    FishTankWrapper fishtemp(new FishTank);
    fishtemp.fishTankPtr->tempAlert();
    std::cout << fishtemp.fishTankPtr->waterTempCelcius << std::endl;
    
    MidiKeyboardWrapper pitchMove(new MidiKeyboard);
    pitchMove.midiKeyboardPtr->pitchShift();
    
    MusicStudioWrapper studio(new MusicStudio);
    
    StudioLightingWrapper lighting(new StudioLighting);
    FishTankWrapper marine(new FishTank);
    marine.fishTankPtr->coralLighting();
    std::cout << "good to go !" << std::endl;
    
}
