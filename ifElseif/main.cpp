//1


#include <iostream>
int main() {

	//int y = 0, x = 100;

	//if (y == 0)
	//{
	//	x = 100;
	//}

////2

	//// 
	//int num1 = 3;
	//int num2 = 6;

	//printf("Input your values in such and such way: ");
	//scanf_s("%d %d",&num1,&num2);
	//getchar();

	//if (num1 >  num2)
	//{
	//	printf("%d\n",num1);

	//}
	//if (num1 <= num2)
	//{
	//	printf("%d\n", num2);
	//}
	//getchar();
	////4

	//int choice = 0;
	//switch (choice)
	//{
	//case 1: std::cout << "1";
	//	break;
	//case 2:
	//case 3: std::cout << " 2 or 3";
	//	break;
	//case 4: std::cout << "4";
	//	break;
	//default: std::cout << "Invalid";
	//	break;
	//}

//6

	// variable definitions must occur before use
	int num3 = 0;
	int num4 = 0;
	char mathOp = '+';
	int result = 0;

	printf("A number followed by an operator followed by a number: ");
	scanf_s("%d %c %d", &num3, &mathOp, 1, &num4);
	getchar();

	//char mathOp1 = +
	//char mathOp2 = -
	//char mathOp3 = *
	//char mathOp4 = /
	//char mathOp5 = %

	switch (mathOp)
	{
	case '+': result = num3 + num4;
		break;
	case '/': result = num3 / num4;
		break;
	case '*': result = num3 * num4;
		break;
	case '-': result = num3 - num4;
		break;
	case '%': result = num3 % num4;
		break;
	}


	//7	
	int month = 0;


	printf("Enter number for month");
	scanf_s("%d", &month);
		getchar();

	if (month == 1)
	{
		printf("%d", 31);
	}
	if (month == 2) 
	{
		printf("%d", 28);
		}
	if (month == 3) 
	{
		printf("%d", 31);
	}
	if (month == 4)
	{
		printf("%d", 30);
	}
	if (month == 5) 
	{
		printf("%d", 31);
	}

















}


