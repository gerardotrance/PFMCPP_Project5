/*
Project 5: Part 1 / 4
 video Chapter 2 - Part 12

 Create a branch named Part1

Purpose:  This project continues developing Project3 and will take you through how to write code that doesn't leak as well as how to refactor. 

 Destructors

 If you didn't do Project3, write 3 UDTs below (where it asks for Copied UDTs) that have: 
        member functions,
        member variables, 
        constructors that initialize the members. 
        for() or while() loops that modify member variables
        
 Define your implementations of all functions OUTSIDE of the class. 
 Then do instruction 2)
 
 If you DID do Project 3, do instruction 1)
 
 1) Copy a few of your user-defined types (the ones with constructors and for()/while() loops from Project 3) here
 2) add destructors
        make the destructors do something like print out the name of the class.

	If you already did Chapter2 part 10 on Coliru and don't have a Project3, just grab some UDTs from your Coliru Ch2P10 submission. 
 
 3) add 2 new UDTs that use only the types you copied above.
 4) Add destructors to these 2 new types that do stuff.  
        maybe print out the name of the class being destructed, or call a member function of one of the members.  be creative
 
 5) copy over your main() from the end of Project3 and get it to compile with the types you copied over.
        remove any code in main() that uses types you didn't copy over.
 
 6) Instantiate your 2 UDT's from step 4) in the main() function at the bottom.
 
 7) After you finish, click the [run] button.  Clear up any errors or warnings as best you can.
 
 */
#include<iostream>
/*
 copied UDT 1:
 */
struct DjMixer
{
    float channelselected;
    int volumeOne;
    int volumeTwo;

    void outputMusic();
    int increaseVTwo();
    int increaseVOne();
    float switchChannelRight();
    DjMixer();
    ~DjMixer()
    {
        std::cout << "DjMixer Destructor." << std::endl;
    }
};

DjMixer::DjMixer() : channelselected(1.5f), volumeOne(0), volumeTwo(0) {}

float DjMixer::switchChannelRight()
{
    while(channelselected < 2.0f)
    {
        ++ channelselected;
    }    
    
    return channelselected;
}

void DjMixer::outputMusic()
{
    std::cout << "Music Playing" << std::endl;
}

int DjMixer::increaseVTwo()
{
    while(volumeTwo < 12)
    {
        ++ volumeTwo;
    }

    return volumeTwo;
}

int DjMixer::increaseVOne()
{
    while(volumeOne < 12)
    {
        ++ volumeOne;
    }

    return volumeOne;
}
/*
 copied UDT 2:
 */
struct Synth
{
    int oscillators;
    bool reverb;
    int reverbSync;
    int syncBPM;
    bool delay;

    void reverbTime();
    void selectDelay();
    int selectBPM();
    Synth();
    ~Synth()
    {
        std::cout << "Synth Destructor" << std::endl; 
    }

};

Synth::Synth(): reverbSync(60), syncBPM(120){}

void Synth::reverbTime()
{
    while(reverbSync < syncBPM)
    {
        ++ reverbSync;
    }
    
    while(reverbSync > syncBPM)
    {
        -- reverbSync;
    }
    
    if(reverbSync == syncBPM)
    {
        return;
    }
}

void Synth::selectDelay()
{
    if(delay == true)
    {
        std::cout << "delay on" << std::endl;
    }

    else
    {
        std::cout << "delay off" << std::endl;
    }
}

int Synth::selectBPM()
{
    while(syncBPM < 175)
    {
        ++ syncBPM;
    }

    return syncBPM;
}
/*
 copied UDT 3:
 */
struct Sampler
{
    bool playButton;
    bool stopButton;
    std::string sample;
    int BPM;
    int startPoint;

    void playSample();
    void stopSample();

    Sampler();
    ~Sampler()
    {
        std::cout << "Sampler Destructor" << std::endl;
    }
};

Sampler::Sampler(): sample(" disco sample"), BPM(120), startPoint(){}

void Sampler::playSample()
{
    while(startPoint < BPM)
    {
        std::cout << sample << " is playing." << std::endl;
        ++ startPoint;
    }
}
 void Sampler::stopSample()
 {
     while(BPM > 0)
     {
       -- BPM;
       std::cout << "sample stopped" << std::endl;
     }
 }
/*
 new UDT 4:
 */
struct AudioInterface
{
    Synth myKorg;
    DjMixer myPioneer;
    DjMixer modelone;
    Sampler myRex;
    Synth nativeInstruments;

    
    void inputSound();
    void outputSound();

    AudioInterface();
    ~AudioInterface()
    {
        std::cout << "AudioInterface Destructor" << std::endl;
    }
};

void AudioInterface::outputSound()
{
    myKorg.oscillators = 4;
    modelone.channelselected = 1.0f;
    nativeInstruments.reverb = false;
}

void AudioInterface::inputSound()
{
    std::cout << " Device found" << std::endl;
}
/*
 new UDT 5:
 */
struct AudioWorkstation
{
    Synth myNovation;
    Synth software;
    DjMixer myPioneer;
    Sampler myRex;
    Sampler cubase;
    
    void recordAudio();

    AudioWorkstation();
    ~AudioWorkstation()
    {
        std::cout << "AudioWorkstation Destructor" << std::endl;
    }
    
    
};

void AudioWorkstation::recordAudio()
{
    cubase.sample = " blues sample";
    std::cout << cubase.sample << std::endl;
}
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
        DjMixer initial;

        std::cout << initial.volumeOne << " is volume one and " << initial.volumeTwo << " is volume two" << std::endl;

        DjMixer newvalue;
        newvalue.increaseVTwo();
        newvalue.increaseVOne();

        std::cout << newvalue.volumeOne << " is the new volume of channel one and " << newvalue.volumeTwo << " is the new volume of channel two" << std::endl;

        Synth access;
        access.reverbTime();
        access.selectBPM();
        std::cout << access.syncBPM << " BPM is the tempo " << std::endl;

        Sampler rex;
        rex.playSample();

        DjMixer denon;
        denon.switchChannelRight();

        std::cout << denon.channelselected << " is the channel position" << std::endl;

        std::cout << "good to go!" << std::endl;
}
