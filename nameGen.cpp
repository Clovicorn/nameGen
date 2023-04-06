#include "nameGen.hpp"

namespace NameGen
{
    NameGen::NameGen()
    {
    }

    std::string NameGen::createPlanetName(int timeMod)
    {
        std::string planetName = "";
        std::srand((int)std::time(nullptr) * timeMod);
        float percent = (float)(std::rand() % RAND_MAX);
        int index = 0;
        if (percent > 0.5)
        {
            _planetHasMiddleSyllable = true;
        }

        std::srand((int)std::time(nullptr) * (timeMod + 1));
        index = (int)(std::rand() % PLANETFIRSTSYLLABLE);
        planetName += _firstSyllablePlanet[index];

        if (_planetHasMiddleSyllable)
        {
            std::srand((int)std::time(nullptr) * (timeMod + 2));
            index = (int)(std::rand() % PLANETMIDDLESYLLABLE);
            planetName += _middleSyllablePlanet[index];
        }

        std::srand((int)std::time(nullptr));
        index = (int)(std::rand() % PLANETLASTSYLLABLE);
        planetName += _lastSyllablePlanet[index];

        _planetHasMiddleSyllable = false;
        return planetName;
    }

    std::string NameGen::createTownName(int timeMod)
    {

        return "Not implemented yet.";
    }
}