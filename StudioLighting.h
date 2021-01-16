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

    JUCE_LEAK_DETECTOR(StudioLighting)
};