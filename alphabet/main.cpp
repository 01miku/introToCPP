#include <iostream>

int main()
{
	// A-C // 65-67 = 2
	// 2 / 2 = 1
	// A+1=B

	int min = 67;  //min letter
	int mid;  // mide letter
	int max = 87;  // max letter

	char firstInput, secondInput;

	scanf_s(" %c", &firstInput, 1);

	getchar();	// HACK: clear the buffer...

	scanf_s(" %c", &secondInput, 1);

	printf("%c %c", firstInput, secondInput);
	printf("\n"); // newline

	min = firstInput;
	max = secondInput;

	int diff = max - min;
	diff = diff / 2;

	mid = max - diff;
	// mid = min + diff;

	

	printf("%d %d", min, max);

	printf("\n");
	system("pause");
}


// char in1 = 0, in2 = 0, median = 0;  //instantiation giving new variables

// explain what this program does
// printf("This program takes 2 alphabetical characters as input from the console

// Input Prompt
// printf("Please input two alphabetical characters separated by a space followed by the enter key

// scanf_s("%c %c , &in1, 1, &in2, 1);
// getchar(); //  gets rid of the newline from the user pressing enter

// Next goal is to conver the input to Upper Case
// in1 = in1 - 32;
// in2 = in2 - 32;

// A  B  C
// 65 66 67
// 0  1  2
// 0  1  2      (%32) modulus


// a  b  c
// 97 98 99
// 32 33 34
//	0  1  2		(%32) modulus

// a % 32
// */

// ch = (ch -65) % 32 + 65;
// in1 = (in1 - 65) % 32 + 65;
// in2 = (in2 - 65) % 32 + 65;










// rounding is by truncation
// that means we completly dump whatever is in the decimal
// median = (in1 + in2) / 2;

// printf("%c is in between %c and %c." , median, in1, in2);
// getchar();  // prevent the application from shutting down




