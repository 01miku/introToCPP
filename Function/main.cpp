#include <iostream>

// Anatomy of a function
// <return type> <alias> (<parameter list>)
// {
// return <value of return type>;
// }

// Multiply parameters together then subtract result
// from right hand side




void printNum(int n);

int MulThenSub(int a_Param, int a_Param2)		
{
	
	printNum(a_Param);
	if (a_Param % 2 == 0)
		return a_Param * a_Param2 - a_Param2;
	else
		return a_Param * a_Param2 - a_Param;
}

void printNum(int n) 
{
	printf("%d", n);
}

int scanNum() {
	int var = 0;
	scanf_s("%d", &var);
	getchar();
	return var;

}

void initArray(int values[], int size, int value) 
{
	for (int i = 0; i < size; ++i)
		values[i] = value;
}

void printArray(int values[], int size)
{
	for (int i = 0; i < size; ++i)
		printNum(values[i]);
}

int main() 
{
	int blah[40];

	initArray(blah, 40, 0);
	
	printf("How many times would you like to run? ");
	int times = scanNum();
	for(int i = 0; i < 6; ++i)
	printNum(MulThenSub(scanNum(), scanNum()));
	getchar();

}
