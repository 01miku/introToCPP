#include <cstdio>

int main()
{

	//if (true) 
	//{
	//	// do this once
	//	printf("do this once");
	//}

	//while (true) 
	//{
	//	// do this over and over
	//	printf("Looping");
	//}

	/*int health = 100;
	while (health > 0);
	{
		health = health - 2;
		printf("Current Health: %d\n", health);
	}*/

	// for (int i = 100, i > 10; --i) // requires 3 pieces of data  - (initializer, condition, expression)

	//ex.1

	//for (int i = 100; i > 0; --i) //print values 100 to 0
	//{
	//	printf("%d \n", i);
	//}

	//for (int i = 100; i >= 0; --i)  //include 0 and 100
	//{
	//	printf("%d /n", i);
	//}

	//for (int i = 99; i  >= 0; --i) //include 0 not 100
	//{
	//	printf("%d \n", i);
	//}
	//for (int i = 100; i > 0; --i) // not 0 include 100
	//{
	//	printf("%d \n", i);
	//}
	//for (int i = 100; i > 0; i -= 2); //decrement by 2




	//ex.2

	for (int i = 0; i <= 100; ++i)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}

		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}


	}

	////ex.3

	//int sum = 0;
	//for (int i = 0; i < 1000; ++i)
	//{
	//	if ((i % 3 == 0) || (i % 5 == 0))

	//	{	// add it to the sum
	//		sum = sum + i;
	//	}
	//}

	//printf("%d", sum);

	//getchar();
}