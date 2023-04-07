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

    std::string NameGen::createTavernName(int timeMod)
    {
        std::string tavernName = "";

        std::srand((int)std::time(nullptr) * timeMod);
        float percent = (float)(std::rand() / RAND_MAX);

        int index = 0;

        if (percent < 0.1f)
        {
            std::srand((int)std::time(nullptr) * (timeMod + 1));
            index = (int)(std::rand() % ARTICLE_TAVERN_NUMBER);
            tavernName += _articleWordTavern[index];
            tavernName += " ";
        }
        std::srand((int)std::time(nullptr) * (timeMod + 1));
        index = (int)(std::rand() % FIRST_WORD_TAVERN_NUMBER);
        tavernName += _firstWordTavern[index];
        tavernName += " ";

        std::srand((int)std::time(nullptr) * (timeMod + 1));
        index = (int)(std::rand() % SECOND_WORD_TAVERN_NUMBER);
        tavernName += _secondWordTavern[index];

        return tavernName;
    }
}