#include <iostream>
#include "tRex.h"




void main()
{

	/*creatStructure();
	printStructure(object);
	modifyStructure(object);
	printStructure(object);*/
	// getchar();

	dangerDino rexy = createDino();
	printDino(rexy);
	modifyDino(rexy);
	printDino(rexy);
	getchar();
}


/////////////////////////////////////////////////////////////////////////////////////////////////


//struct Dinosaur {
//	char name[80];
//	char species[80];
//	int limbs;
//	int eyes;
//	int teeth;
//	int mouths;
//};
//
//Dinosaur createDinosaur();
//
//void printDinosaur(Dinosaur a_dino);
//
//void modifyDinosaur(Dinosaur &a_dino);
//
//
//
//int main() {
//
//	const int arraySize = 3;
//		
//	Dinosaur dino[arraySize];
//	
//	for (int i = 0; i < arraySize; ++i) 
//	{
//		dino[i] = createDinosaur();
//		printDinosaur(dino[i]);
//		modifyDinosaur(dino[i]);
//		printDinosaur(dino[i]);
//	}
//	getchar();
//
//}
//	Dinosaur createDinosaur()
//	{
//
//		Dinosaur retval = {};
//
//		printf("Enter Dino name: ");
//		scanf_s("%s", retval.species, 80);
//		getchar();
//
//
//	
//		return retval;
//	}
//
//	void printDinosaur(Dinosaur a_dino) 
//	{
//		printf("%s is %s, she has %d mouths, %d limbs, %d eyes, % ferocious teeth.\n", a_dino.name, a_dino.species, a_dino.mouths, a_dino.limbs, a_dino.eyes, a_dino.teeth);
//
//	}
//
//	void modifyDinosaur(Dinosaur &a_dino)
//	{
//		a_dino.limbs++;
//		a_dino.teeth--;
//		a_dino.eyes++;
//		a_dino.mouths--;
//	}
//
