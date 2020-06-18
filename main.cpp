/*
 Project 5: Part 3 / 4
 video: Chapter 3 Part 4: 

Create a branch named Part3

 the 'new' keyword

 1) add #include "LeakedObjectDetector.h" to main
 
 3) Add 'JUCE_LEAK_DETECTOR(OwnerClass)' at the end of your UDTs.
 
 4) write the name of your class where it says "OwnerClass"
 
 5) write wrapper classes for each type similar to how it was shown in the video
 
 7) update main() 
      replace your objects with your wrapper classes, which have your UDTs as pointer member variables.
      
    This means if you had something like the following in your main() previously: 
*/
#if false
 Axe axe;
 std::cout << "axe sharpness: " << axe.sharpness << "\n";
 #endif
 /*
    you would update that to use your wrappers:
    
 */

#if false
AxeWrapper axWrapper( new Axe() );
std::cout << "axe sharpness: " << axWrapper.axPtr->sharpness << "\n";
#endif
/*
notice that the object name has changed from 'axe' to 'axWrapper'
You don't have to do this, you can keep your current object name and just change its type to your Wrapper class

 8) After you finish, click the [run] button.  Clear up any errors or warnings as best you can.
 
 see here for an example: https://repl.it/@matkatmusic/ch3p04example
 */



#include<iostream>
/*
 copied UDT 1:
 */
struct MidiKeyboard
{
    int keys, pitch, modWheel;
    bool pitchWheel, keyPressed, grand;
    char address;

    void playMidiNotes(bool keyPressed);
    void changePitch(bool pitchWheel);
    void controlMacros(bool modWheel);
    void printKeys();
    int pitchShift();

    MidiKeyboard();
    ~MidiKeyboard()
    {
        std::cout << "MidiKeyboard Destructor" << std::endl;
    }

    void mkFunc()
    {
        std::cout << this->pitch << " semitones from root note" << std::endl;
        std::cout << this << " is the address of MidiKeyboard" << std::endl;
    }
};

MidiKeyboard::MidiKeyboard(): keys(32),pitch(0), modWheel(1),pitchWheel(true), keyPressed(false), grand(false){} 

int MidiKeyboard::pitchShift()
{
    while(modWheel == 0 )
    {
        pitch = 0;       
    }

    while(modWheel == 1 )
    {
        ++pitch;
        std::cout << pitch << " tones moved up" << std::endl;
        if(pitch >= 12)
        {
            modWheel = 0;
            std::cout << "pitch shifted up one octave" << std::endl;
        }
    }

    return 0;   
}

void MidiKeyboard::printKeys()
{
    std::cout << keys << " keys available." << std::endl;
}

void MidiKeyboard::playMidiNotes(bool press)
{
    keyPressed = press;

    if(keyPressed == true)
    {
        std::cout << "key pressed" << std::endl;  
    }

    else
    {
        std::cout << "key not pressed" << std::endl;
    } 

}

void MidiKeyboard::changePitch(bool up)
{
    pitchWheel = up;

    if(pitchWheel == true)
    {
        std::cout << "pitch wheel" << std::endl;
    }
    
    else
    {
        std::cout << "no pitch wheel" << std::endl;
    }

}

void MidiKeyboard::controlMacros(bool macro)
{
    modWheel = macro;

    if(modWheel == true)
    {
        std::cout << "mod wheel" << std::endl;
    }

    else
    {
        std::cout << "no mod wheel" << std::endl;
    }

}
/*
 copied UDT 2:
 */
struct Laptop
{
    int screenResolution = 4000;
    bool keyboard = true;
    std::string password = "password";
    int hardDriveAvailableGb = 256;
    int hardDriveUsed = 512 - hardDriveAvailableGb;
    int memoryGb = 8;

    Laptop();
    ~Laptop()
    {
        std::cout << "Laptop Destructor" << std::endl;
    }
    void resDescription()
    {
        std::cout << this->screenResolution << " is the screen resolution of the screen." << std::endl;
        std::cout << this << " is the address of Laptop " << std::endl;
    }
    void receiveInput(bool keyboard, std::string password, int memoryGb);
    float produceOutput(bool screenResolution, int memoryGb);
    float saveData(int hardDriveAvailableGb);
    void hardDriveDetails();

};

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

void Laptop::receiveInput(bool keyboardInput, std::string user, int RAM)
{
    keyboard = keyboardInput;
    password = user;
    memoryGb = RAM;

    if(password == "password")
    {
        std::cout << "welcome user" << std::endl;
    }

    if(password != "password")
    {
        std::cout << "incorrect password" << std::endl;
    }

    else
    {
        std::cout << "enter password" << std::endl;
    }

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
/*
 copied UDT 3:
 */
struct FishTank
{
    int waterTempCelcius = 25;
    int heightCm = 30;
    int lengthCm = 90;
    int gallons = 50;
    bool lightOn = true;
    int corals;

    FishTank();
    ~FishTank()
    {
        std::cout << "FishTank Destructor" << std::endl;
    }

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
    void coralLighting()
        {
            std::cout << this->corals << " is the number of corals in the aquarium" << std::endl;
            std::cout << this << " is the address of FishTank" << std::endl;
        }

};

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
/*
 new UDT 4:
 */
struct MusicStudio
{
    MidiKeyboard midiKeyboard;
     Laptop laptop;
    
    MusicStudio()
    {
        std::cout << "MusicStudio Constructor" << std::endl;
    }
    ~MusicStudio()
    {
        std::cout << "MusicStudio Destructor" << std::endl;
    }
};


/*
 new UDT 5:
 */
struct StudioLighting
{
    FishTank aquarium;
    
    StudioLighting()
    {
        std::cout << "Studio Lighting Constructor" << std::endl;
    }
    ~StudioLighting()
    {
        std::cout << "Studio Lighting Destructor" << std::endl;
    }
};
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{   
    MidiKeyboard keyboard;
    keyboard.printKeys();
    //Midikeyboard project 5 part2
    std::cout << keyboard.pitch << " is the pitch" << std::endl;
    std::cout << &keyboard << " is the address of keyboard object." << std::endl;
    keyboard.mkFunc();
    
    //
    Laptop myLaptop;
    //Laptop project 5 part2
    std::cout << myLaptop.screenResolution << " is the resolution of the laptop screen." << std::endl;
    std::cout << &myLaptop << " is the address of the myLaptop object." << std::endl;
    myLaptop.resDescription();
    //
    myLaptop.hardDriveDetails();
    FishTank aquarium;
    //Fishtank project 5 part2
    std::cout << aquarium.corals << "is the number of corals in this aquarium." << std::endl;
    std::cout << &aquarium << " is the address of the aquarium object." << std::endl;
    aquarium.coralLighting();
    //
    aquarium.printTemp();
    std::cout << aquarium.waterTempCelcius << std::endl;
    std::cout << aquarium.gallons << std::endl;
    FishTank fishtemp;
    fishtemp.tempAlert();
    std::cout << fishtemp.waterTempCelcius << std::endl;
    MidiKeyboard pitchMove;
    pitchMove.pitchShift();
    MusicStudio studio;
    StudioLighting lighting;
    FishTank marine;
    marine.coralLighting();
    std::cout << "good to go !" << std::endl;
    
}
