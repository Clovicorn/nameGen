#pragma once

#include <iostream>
#include <ctime>
#include <cstdlib>

#include "definitions.hpp"

namespace NameGen
{
    enum class Gender
    {
        MALE,
        FEMALE,
        NEUTRAL,
    };

    class NameGen
    {
    public:
        NameGen();
        std::string createPlanetName(int timeMod);
        std::string createTownName(int timeMod);
        std::string createTavernName(int timeMod);
        std::string createDwarvenName(int timeMod, Gender gender);

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
        // ------ Begin Dwarven names ------
        std::string dwarfFemaleFirstSyllable[DWARF_FEMALE_FIRST_SYLLABLE] = {"Aba", "Abi", "Abe", "Abh", "Abl", "Abre", "Abhri", "Abri", "Abu", "Asha", "Ashe", "Ashi", "Asho", "Astra", "Atra", "Atri", "Baek", "Baeka", "Baekah", "Baeki", "Bael", "Baela", "Baele", "Baeli", "Bata", "Bati", "Bea", "Beati", "Bele", "Beli", "Bhrae", "Bhraena", "Bhee", "Bheeta", "Bheete", "Bheeti", "Bheety", "Bhree", "Bhreena", "Brae", "Braena", "Bre", "Bree", "Bri", "Brue", "Bruena", "Bruna", "Bruni", "Brye", "Bryna", "Cae", "Caeli", "Caeti", "Calee", "Calii", "Cat", "Cate", "Cati", "Colee", "Fabhi", "Fabhri", "Fallah", "Fae", "Faeta", "Fasha", "Fastra", "Floa", "Flooa", "Foa", "Fola", "Frae", "Free", "Freja", "Frejah", "Freeta", "Freetah", "Freewah", "Fryna", "Maba", "Maare", "Maari", "Mabi", "Mabre", "Mabhri", "Mar", "Mashe", "Mashi", "Masho", "Mea", "Meae", "Meera", "Mheeta", "Mira", "Merra", "Naba", "Nabhe", "Nabi", "Nabhri", "Nabri", "Nara", "Nashi", "Nashe", "Natra", "Natri", "Nasha", "Nashi", "Nastra", "Nastri", "Natra", "Nhra", "Nora", "Norae", "Noora", "Shanta", "Shantah", "Shanti", "Shoota", "Shooti", "Shree", "Shrii", "Suni", "Sunneh", "Taara", "Tarri", "Tia", "Teia", "Treaa", "Treah", "Treiah", "Yana", "Yani", "Yanna", "Yanta", "Yantae", "Yantah", "Zara", "Zarrah", "Zari", "Zea", "Zerra", "Zeta", "Zia", "Zoe", "Zoey"};

        std::string dwarfFemaleSecondSyllable[DWARF_FEMALE_SECOND_SYLLABLE] = {"bara", "bree", "baile", "bailie", "cala", "cata", "cooz", "cuuz", "dana", "daty", "deena", "dina", "deeta", "deeti", "deety", "hana", "hata", "hatri", "hazza", "lalak", "lea", "leah", "lia", "lily", "mia", "mila", "mezza", "mezzi", "mezzy", "naa", "nan", "nana", "nil", "non", "nuk", "sa", "strix", "ta", "tra", "tri", "trii", "try", "took", "touk", "za", "zana", "zara", "zina", "zona"};

        std::string dwarfMaleFirstSyllable[DWARF_MALE_FIRST_SYLLABLE] = {
            "Aab", "Aabh", "Aant", "Aanth", "Aart", "Aarte", "Ab", "Abh", "Amg", "Armd", "Ang", "Ant", "Anth", "Art", "Arte", "Artz", "Asol", "Asul", "Aum", "Aza", "Aze", "Azil", "Azol", "Azu", "Bek", "Beir", "Beor", "Berr", "Blad", "Boer", "Bor", "Bur", "Can", "Caen", "Chaent", "Char", "Crum", "Cruu", "Daab", "Daabh", "Daant", "Daanth", "Daart", "Daarte", "Dab", "Dabh", "Damg", "Darm", "Dang", "Dant", "Danth", "Dart", "Dartz", "Datol", "Datul", "Datum", "Daz", "Dazil", "Dazut", "Dectl", "Deczar", "Deet", "Deez", "Deaft", "Degan", "Deghan", "Deit", "Deiz", "Dekhan", "Dekhull", "Dekk", "Eab", "Eabh", "Eant", "Eanth", "Eart", "Earte", "Eb", "Ebh", "Eent", "Eeth", "El", "Emg", "Eng", "Ent", "Enth", "Ert", "Erte", "Ertz", "Esok", "Esol", "Eza", "Ezak", "Ezal", "Ezel", "Ezek", "Ezil", "Ezik", "Ezol", "Ezok", "Faetil", "Fang", "Flae", "Flaent", "Flint", "Fran", "Frang", "Gaabh", "Gaant", "Gaanth", "Gaart", "Garmd", "Gant", "Ganth", "Gart", "Gartz", "Gunth", "Naor", "Newl", "Noor", "Obh", "Oh", "Ohm", "Ong", "Otu", "Phael", "Phil", "Phoo", "Phu", "Rae", "Rain", "Red", "Ret", "Retu", "Roe", "Roen", "Row", "Rut", "Rutz", "Sty", "Tuk", "Tul", "Ty", "Uahn", "Ung", "Uh", "Yar", "Yha", "Yhu", "Yhul", "Yo", "Yof", "Yu", "Za", "Zah", "Zant", "Zabh", "Zart", "Zha", "Zhal", "Zohl", "Zul", "Zhul"};

        std::string dwarfMaleSecondSyllable[DWARF_MALE_SECOND_SYLLABLE] = {"aar", "and", "band", "bilt", "brund", "garnd", "gil", "gli", "glund", "glum", "gund", "ha", "ham", "han", "hand", "hund", "nar", "narng", "narntz", "noor", "nootz", "nuung", "rand", "rang", "ranz", "rum", "rumt", "rumz", "rund", "runz", "soel", "stu", "strom", "strum", "sturn", "tur", "turtz", "thur", "thurtz", "thutz", "um", "und", "untz", "zand", "zil", "zilt", "ziltz", "zund", "zung"};
    };
}