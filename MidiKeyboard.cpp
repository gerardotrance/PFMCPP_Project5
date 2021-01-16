
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