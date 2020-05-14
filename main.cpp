/*
Project 5: Part 2 / 4
 video: Chapter 3 Part 1

Create a branch named Part2

 The 'this' keyword
 
 The purpose of this project part is to show you how accessing member variables of objects INSIDE member functions is very similar to accessing member variables of objects OUTSIDE of member functions, via 'this->' and via the '.' operator.
 This project part will break the D.R.Y. rule, but that is fine for the purpose of this project part.
 
 
 1) if you don't have any std::cout statements in main() that access member variables of your U.D.Ts
         write some.
    You can copy some from your Project3's main() if needed.
 
 2) For each std::cout statement in main() that accessed member variables of your types or printed out the results of your member function calls,
        a) write a member function that prints the same thing out, but uses the proper techniques inside the member functions to access the same member variables/functions.
        b) be explicit with your use of 'this->' in those member functions so we see how you're accessing/calling those member variables and functions *inside*
        c) call that member function after your std::cout statement in main.
        d) you should see 2 (almost) identical messages in the program output for each member function you add:
            one for the std::cout line, and one for the member function's output
 
 
 3) After you finish, click the [run] button.  Clear up any errors or warnings as best you can.
 */

/*
 example:
 */
#include <iostream>
namespace Example
{
    //a User-Defined Type
    struct MyFoo
    {
        MyFoo() { std::cout << "creating MyFoo" << std::endl; }
        ~MyFoo() { std::cout << "destroying MyFoo" << std::endl; }
		
		// 2a) the member function whose function body is almost identical to the std::cout statement in main.
        void memberFunc() 
		{ 
            // 2b) explicitly using 'this' inside this member function.
			std::cout << "MyFoo returnValue(): " << this->returnValue() << " and MyFoo memberVariable: " << this->memberVariable << std::endl; 
		}  
		
        int returnValue() { return 3; }
        float memberVariable = 3.14f;
    };
    
    int main()
    {
        //an instance of the User-Defined Type named mf
        MyFoo mf;
		
        // 1) a std::cout statement that uses mf's member variables
        std::cout << "mf returnValue(): " << mf.returnValue() << " and mf memberVariable: " << mf.memberVariable << std::endl; 
		
        // 2c) calling mf's member function.  the member function's body is almost identical to the cout statement above.
        mf.memberFunc();
        return 0;
    }
}

#include<iostream>
/*
 copied UDT 1:
 */
struct MidiKeyboard
{
    int keys, pitch, modWheel;
    bool pitchWheel, keyPressed, grand;

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

    FishTank();
    ~FishTank()
    {
        std::cout << "FishTank Destructor" << std::endl;
    }

    struct Decor
    
    {
        bool livePlants = true;
        int numberOfPlants = 6;
        bool corals = false;
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
};

FishTank::FishTank() : waterTempCelcius(24), gallons(75){}

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
	Example::main();
    MidiKeyboard keyboard;
    keyboard.printKeys();
    Laptop myLaptop;
    myLaptop.hardDriveDetails();
    FishTank aquarium;
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
    std::cout << "good to go !" << std::endl;
    
}
