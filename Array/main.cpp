// Arrays

#include <iostream>

int main() 
{

//#Q2. Given the following array definition:
//	int values[] = { 2, 6, 10, 14 };
//	What does each of the following display ?
//		a) cout << values[2]
//		b) cout << ++values[0];
//	c) cout << values[1]++;
//	d) x = 2;
//	cout << values[++x];
//	e) cout << values[4];

//#A2.
	//int values[] = { 2,6,10,14 };
	////printf("%d",<< ++values[0]);

	//// Console OUT
	//std::cout << values[2] << "\n";		//a
	//std::cout << ++values[0] << "\n";	//b
	//std::cout << values[1]++ << "\n";	//c
	//std::cout << values[4];				//d

	//// Console IN
	//// cin

	//// gets a thing
	//std::cin.get();


// #Q3. Write a for loop to initialize the following array (int data[10]) with the values 10, 9, 8… (Etc)
	
//#A3
	//int data[10];

	//for (int i = 10; i > 0; --i)
	//{
	//	printf("%d", data[i]);
	//}



	//Q4. Create a program that asks for 5 numbers from the user, and store them in an array.Print
		//out the numbers in reverse order.
//// #4A

	//int num[5];

	//printf("please enter 5 numbers:");

	////scanf_s("%d,%d,%d,%d,%d", &num[0], &num[1], &num[2], &num[3], &num[4]);

	//for (int i = 0; i < 5; ++i) 
	//{
	//	scanf_s("%d", &num[i]);
	//}
	//getchar();
	//
	//for (int i = 4; i < 0; --i)
	//{
	//	printf("%d", &num[i]);
	//}


	//#Q5. Write a program that lets the user enter 10 values into an array.The program should then
		//display the largest and smallest values stored in the array.
	
	
	
	
	// #A5

	//float input[10];
	//float smallest;
	//float largest;

	//printf("Input 10 values: ");

	//for (int i = 0; i < 10; ++i) 
	//{
	//	scanf_s("%f", &input[i]);

	//	if (i == 0)
	//		smallest = largest = input[i];

	//	if (input[i] > largest)
	//		largest = input[i];

	//	if (input[i] < smallest)
	//		smallest = input[i];
	//}

	//getchar();

	//printf("Largest: %f, smallest: %f", largest, smallest);
	//getchar();



	//#Q6Create a program that creates a small 3x3 array of integers.Use a nested for loop to initialise
		//the numbers 1 - 9. Output the numbers in a grid format.



// #A6

	int values[3][3];
	int valcounter = 1;

	// [1][2][3]
	// [4][5][6]
	// [7][8][9]


	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			values[i][j] = valcounter++;
			printf("%d\t", values[i][j]);

		}
		getchar();

	}




}