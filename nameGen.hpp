#pragma once

#include <iostream>
#include <ctime>
#include <cstdlib>

#define PLANETFIRSTSYLLABLE 34
#define PLANETMIDDLESYLLABLE 22
#define PLANETLASTSYLLABLE 39

namespace NameGen
{
    class NameGen
    {
    public:
        NameGen();
        std::string createPlanetName(int timeMod);
        std::string createTownName(int timeMod);

    private:
        // ----- Planet variables here -----
        //              |
        //              v
        bool _planetHasMiddleSyllable = false;
        std::string _firstSyllablePlanet[PLANETFIRSTSYLLABLE] = {"A", "Act", "Ae", "Al", "Apo", "Ar", "Au", "Ba", "Car", "Ce", "Cor", "Crom", "Er", "Hal", "Io", "La", "Lae", "Lao", "Lar", "Mae", "Men", "My", "Ne", "O", "Oe", "Pan", "Pha", "Phi", "Stri", "Sty", "Ta", "Ter", "Tro", "Xa"};

        std::string _middleSyllablePlanet[PLANETMIDDLESYLLABLE] = {"ae", "chi", "co", "cyon", "duel", "dyss", "ect", "et", "eth", "i", "idan", "kyo", "l", "li", "lo", "me", "my", "ni", "o", "ther", "ton", "y"};

        std::string _lastSyllablePlanet[PLANETLASTSYLLABLE] = {"a", "dite", "don", "e", "es", "eon", "etes", "eus", "gone", "gos", "is", "ius", "jan", "k", "la", "laps", "lo", "ne", "nia", "nides", "nis", "noe", "on", "on", "os", "ous", "pes", "ra", "rana", "rion", "ryon", "s", "sia", "this", "thon", "thus", "us", "vus", "x"};

        // ------ End planet variables -------
    };
}