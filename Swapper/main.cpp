#include <iostream>

// Right-click solution -> Add -> New Project
// Named it swapper

// Right-clic swapper -> Set as startup project
// Add -> New Source file item

int main()
{
	int varA = 0, varB = 0;
	//printf("var currently stores: %d \n", var);
	printf("Insert a new value for var:"); // prompt user
	scanf_s("%d %d", &varA, &varB);  // assign var value from console
	getchar();  // inappropriate way to clear buffer
	printf("A: %d, B: %d", varA, varB);

	// Swap the values here

	// A 6
	// B 3
	
	//varB = varA - varB; // varA stores the difference between the two

	// A 6
	// B 3

	//varA = varA - varB;
	// A 3
	// B 3 .. still needs to change!

	//varB = varB + varB;

	// A 3
	// B 6
	///////////////////////////////////////////////////////////////////////////////////////////
//	int varA = 0;
	//int varB = 0;
	int swapT = varA;

	varA = varB;
	varB = swapT;

	//////////////////////////////////////////////////////////////////////////////////////////////

	// alphabet C -> W

	//int top = 0;
	//int bott = 20;
	//int mid = bott / 2;




	


	printf("Swap successful (well, probably)\n");
	printf("A: %d, B: %d \n",varA, varB);
	getchar();  //prevent the program from closing



}


	int main()
{
		int a = 0,
		int b = 1,
		int c = 2,
		int d = 3,
		int e = 4;

		printf("Insert 5 integers: "); //promt user
		scanf_s("%d %d %d %d %d, &a, &b, &c, &d, &e");  // assign var a

		int avg = (a + b + c + d + e) / 5;

		printf(" The average is: %d \n, avg");

		system("pause");



}