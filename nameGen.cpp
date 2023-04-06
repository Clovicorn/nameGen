#include "nameGen.hpp"

namespace NameGen
{
    NameGen::NameGen()
    {
    }

    std::string NameGen::createPlanetName()
    {
        std::string planetName = "";
        std::srand((int)std::time(nullptr));
        float percent = (float)(std::rand() % RAND_MAX);
        int index = 0;
        if (percent > 0.5)
        {
            _planetHasMiddleSyllable = true;
        }

        std::srand((int)std::time(nullptr));
        index = (int)(std::rand() % PLANETFIRSTSYLLABLE);
        planetName += _firstSyllablePlanet[index];

        if (_planetHasMiddleSyllable)
        {
            std::srand((int)std::time(nullptr));
            index = (int)(std::rand() % PLANETMIDDLESYLLABLE);
            planetName += _middleSyllablePlanet[index];
        }

        std::srand((int)std::time(nullptr));
        index = (int)(std::rand() % PLANETLASTSYLLABLE);
        planetName += _lastSyllablePlanet[index];

        _planetHasMiddleSyllable = false;
        return planetName;
    }

    std::string NameGen::createTownName()
    {

        return "Not implemented yet.";
    }
}