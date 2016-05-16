/*
Autor: Azoni
Description: Diese Datei guckt per Abfrage in welchem Level 
sich der Spieler befindet und gibt den Level spezifischen Reward
*/
if(life_level == 1) then
{
	if(life_xp => 100) then 
	{
		life_level = life_level + 1;
		life_xp = 0;
		hint format["Du bist ein Level aufgestiegen\nDein momentanes Level ist: %1",life_level];
		[] call life_fnc_levelrewards;
	};
};