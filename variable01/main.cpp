#include <iostream>

int main()
{
	int i = 0;
	float f = 0;
	char ch = '\a';	
	std::cin >> i >> ch >> f;
	std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;


	system("pause"); // another way to hang an application to prevent it from closing


	printf("Hello World!");  // \n creates a new line

	//Variable definition
	//I'm asking the computer for memory
	//This memory will be used for integer math
	//I've given this variable the alias 'var'
	
	float var;

	//Variable Assignment
	//I'm using the literal value '12'
	//and assigning is an initialization
	//first assignment is an initialization

	var = 12.5;

	//Variable Instantiation
	//When you define and initialize a the same time

	int ivar = var + 4;

	printf("%f %d", var, ivar);

	getchar();

}
