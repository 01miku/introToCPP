#include "tRex.h"


void printDino(dangerDino dino) // dino = rexy
{
	printf("%d %d %d %d\n", dino.size, dino.aggression, dino.huntingAbility, dino.speed);
}


// <return-type> 
dangerDino createDino(/*int size, int aggression, int huntingAbility, int speed*/)
{
	dangerDino dino;
	dino.aggression = 0;
	// We may want to scan for values for the dino
	return dino;
}

void modifyDino(dangerDino &dino)
{
	dino.aggression++;
}