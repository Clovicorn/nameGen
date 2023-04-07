#pragma once

#include <iostream>
#include <ctime>
#include <cstdlib>

#include "definitions.hpp"

namespace NameGen
{
    class NameGen
    {
    public:
        NameGen();
        std::string createPlanetName(int timeMod);
        std::string createTownName(int timeMod);
        std::string createTavernName(int timeMod);

    private:
        // ----- Begin Planet variables -----
        bool _planetHasMiddleSyllable = false;
        std::string _firstSyllablePlanet[PLANETFIRSTSYLLABLE] = {"A", "Act", "Ae", "Al", "Apo", "Ar", "Au", "Ba", "Car", "Ce", "Cor", "Crom", "Er", "Hal", "Io", "La", "Lae", "Lao", "Lar", "Mae", "Men", "My", "Ne", "O", "Oe", "Pan", "Pha", "Phi", "Stri", "Sty", "Ta", "Ter", "Tro", "Xa"};

        std::string _middleSyllablePlanet[PLANETMIDDLESYLLABLE] = {"ae", "chi", "co", "cyon", "duel", "dyss", "ect", "et", "eth", "i", "idan", "kyo", "l", "li", "lo", "me", "my", "ni", "o", "ther", "ton", "y"};

        std::string _lastSyllablePlanet[PLANETLASTSYLLABLE] = {"a", "dite", "don", "e", "es", "eon", "etes", "eus", "gone", "gos", "is", "ius", "jan", "k", "la", "laps", "lo", "ne", "nia", "nides", "nis", "noe", "on", "on", "os", "ous", "pes", "ra", "rana", "rion", "ryon", "s", "sia", "this", "thon", "thus", "us", "vus", "x"};

        // ------ End planet variables -------
        // ------ Begin Tavern variables ------
        std::string _articleWordTavern[ARTICLE_TAVERN_NUMBER] = {"Da", "The", "Thee", "Ye"};

        std::string _firstWordTavern[FIRST_WORD_TAVERN_NUMBER] = {"Angry", "Bare", "Big", "Brass", "Chittering", "Dark", "Dirty", "Faded", "Fated", "Foaming", "Giant", "Grim", "Headless", "Lazy", "Light", "Long", "Prancing", "Single", "Small", "Stout", "Strong", "Tired", "Two-Headed"};

        std::string _secondWordTavern[SECOND_WORD_TAVERN_NUMBER] = {"Boar", "Brew", "Bomb", "Bone", "Cat", "Chicken", "Cup", "Divide", "Dog", "End", "Fate", "Flame", "Flower", "Frog", "Goblet", "Hedge", "Horse", "House", "Nest", "Poison", "Pony", "Rabbit", "Rail", "Rock", "Side", "Snake", "Squirrel", "Table", "Wolf", "Wyrm"};
        // ------ End Tavern variables ------
    };
}