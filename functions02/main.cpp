#include <iostream>

// When do we actually want to make a function?
// How much work should a function do?
// 



//float values() {
//
//	float valueA = 0;
//	float valueB = 0;
//}
//
//void main() 
//{
//	scanf_s("%f", "%f", &valueA, &valueB);
//	
//	if (valueA < valueB) {
//		printf("%f", valueA);
//	}
//	else (valueB < valueA) {
//		printf("%f", valueB);
//	}
//}

// 15.5
// 15.6

// # 2
float LowerOfTwo(float first, float second)
{
	if (first > second)
	{
		//printf("%f", second);
		return second;
	}
	else
	{
		//printf("%f", first);
		return first;
	}
}

int main()
{
	float userInputA;
	float userInputB;

	printf("Give me two numbers and I will give you the lesser of those two. :) \n");

	scanf_s("%f %f", &userInputA, &userInputB);

	float lower = LowerOfTwo(userInputA, userInputB);


	printf("\n%f", lower);
	

	system("pause");
}



// # 3

float LowerOfThree(float first, float second, float third)
{
	if (first < second && first < third)
	{
		//printf("%f", first);
		return first;
	}
	if (second < first && second < third)
	{
		//printf("%f", second);
		return second;
	}
	if (third < first && third < second) {
		//printf("%f", third);
		return third;
	}
	

}

int main()
{
	float userInputA;
	float userInputB;
	float userInputC;

	printf("Give me three numbers and I will give you the lesser of the three. :) \n");

	scanf_s("%f %f %f", &userInputA, &userInputB, &userInputC);

	float lower = LowerOfThree(userInputA, userInputB, userInputC);


	printf("\n%f", lower);


	system("pause");
}




