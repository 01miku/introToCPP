//Memory Layout
//	: How data appears in memeory and whi its important
//	: Pointer and type casting
//Storage Duration
//	: How long memeory lives
//
//Linking
//	: Multi-File projects
//	: includes
//	: static, extern
//
//Mutability
//	:
//

#include <iostream>

// A pointer is a variable
	// follows all the same rules

// A variable that stores memeory address

//void setInt(int *ptr, int value) 
//{
//	*ptr = value;
//}
//
//
//
//
//void main() {
//
//	//int variable = 40;				// storing data somewhere in memory
//	//int *pointer = &variable;		// stores where the variable is
//
//	int variable = 0;
//
//	setInt(&variable, 40);
//
//
//}



//////////////////////////////////////////////////////////////////////////////////////////
// exercises

// # 1

//
//char c = 'T', d = 'S';
//char *p1 = &c;
//char *p2 = &d;
//char *p3;
//
//void main() 
//{
//	p3 = &d;
//
//	std::cout << "*p3 = " << *p3 << std::endl;
//
//	p3 = p1;
//
//	std::cout << "*p3 = " << *p3;
//	std::cout << ", p3 = " << p3 << std::endl;
//
//	*p1 = *p2;
//
//	std::cout << "*p1 = " << *p1;
//	std::cout << ", p1 = " << p1 << std::endl;
//
//	system("pause");
	
//}

// # 2
// consider following

//int *p;
//int i;
//int k;
//
//i = 42;
//k = i;
//p = &i;


// # 3

// D (*p = 75)

//

// # 4




////////////////////////////////////////////////////////////////////////////////////////////////////

//void main() {
//	
//	int var = 22;
//	float far = var;
//
//	std::cout << far << std::endl;
//
//	far = *(float*)&var;
//
//	std::cout << far << std::endl;
//
//	getchar();
//
//}

//REFRENCES

void setInt(int var, int value) {
	var = value;
}

void setInt(int *ptr, int value) {
	*ptr = value;
}

void setInt(int &ref, int value) {
	ref = value;
}


void main() {

	int var = 45;				// owner
	int &ref = var;				// user
	int *ptr = &var;			// pointer

	//setIntV(var, 9);
	//setIntP(ptr, 10);
	//setIntR(ref, 11);



	ref = 4;
	
	//std::cout << &var << &ref << ptr << &ptr << std::endl;

	printf("%d %d %d %d", &var, &ref, ptr, &ptr);

	getchar();
}