#include <iostream>

struct dangerDino
{
	int size = 1;
	int aggression = 1;
	int huntingAbility = 1;
	int speed = 1;


};

void modifyDino(dangerDino &dino);

void printDino(dangerDino dino);

dangerDino createDino(/*int size, int aggression, int huntingAbility, int speed*/);