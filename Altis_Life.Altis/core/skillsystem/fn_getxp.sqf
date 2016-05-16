#include "..\..\script_macros.hpp"
/*
Autor: Azoni
Description: Hier wird per while loop die Zeit für die 
XP Vergabe geloopt
*/
while{true} do {
	sleep ((LIFE_SETTINGS(getNumber,"xp_time"))*60);
	life_xp = life_xp + 10;
	hint "Du hast 10 XP bekommen!";
	[] call life_fnc_levelcheck;
};