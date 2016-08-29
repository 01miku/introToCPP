#include <iostream>		//cin, cout, printf, scanf, system
#include <cstdio>		// printf, scanf


void main()				// entry point 
{						// scope describes the active working area


	unsigned int var = 0;			// variable definition
									// <type specifier> <identifier> <assignment: push the value into the variable>



									// For Variables
									// Declaration		: TODO
									// Definition		: Defines what the varialbe is
									// Assignment		: push a value into a variable
									// Initialization	: give a variable an initial value
									// Instantiation	: define and initialize simultanieously
									// Arithmetic		: basic mathy calculator stuff works as expected
									// Relational		: less than and greater than, returns boolean type
									// Logical			: operations with booleans
									// Unary			: operator that works with a single value
									// Binary			: opeators that work with multiple values


	printf("Input a number to evaluate the caollatz: ");	// prompt the user for input
	scanf_s("%d", &var);
	getchar();			// eats up the leftover '\n' automatically without halting


						// If V is even, divide by 2
						// If V is odd, 3 # V + 1
						// If V is 1, end the sequence


	printf("%d ", var);				// prints the "6" before the loop

	while (var > 1)
	{
		if (var % 2 == 0)			// checks for even number
			var = var / 2;
		else                        // if (var % 2 == 1) checks for odd numbers
			var = 3 * var + 1;


		printf("%d ", var);
	}

	getchar();					// this one will now pause the program

}