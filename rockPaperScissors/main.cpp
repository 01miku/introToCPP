#include <iostream>
#include <cstdlib>


int userChoice(int rock, int paper, int scissors) 
{
	int rock = 1;
	int paper = 2;
	int scissors = 3;
}

bool playingGame() 
{
	bool playingGameT = true;
	bool playingGameF = false;

}


void main() { 

	int rock = 1;
	int paper = 2;
	int scissors = 3;


	int computerChoice(int rock = 1, int paper = 2, int scissors = 3);
	int computerChoice = rand() % 3 + 1;

	scanf_s("%d", &userChoice);
	
	printf("%d", computerChoice);



	if
		(int userChoice = 1 || int computerChoice = 1 && int threeWayPlay =3 || int computerChoice = 3)
	{
		printf("rock wins");
	}
	if
		(int userChoice = 3 || int computerChoice = 3 && int threeWayPlay = 2 || int computerChoice = 2)
		{
			printf("scissors wins");
		}
	
		if
			(int userChoice = 2 || int computerChoice = 2 && int threeWayPlay = 1 || int computerChoice = 1)
		{
			printf("paper wins");
		}
		if (int userChoice = int computerChoice)
		{
			printf("tie");
		}
		

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// comparing two integers and the result is win, loss, or tie
// 1 on player1 win
// 0 on tie
// 2 on player2

//int solveBattle(int p1, int p2)
//{
//	if (p1 == p2) return 0;
//
//	if ((p1*p2) % 2 == 0)
//		if (p2 < p1)
//			return 1;
//		else return 2;
//	else
//		if (p2 > p1) return 1;
//		else return 2;
//}
//
//
//
//
//
//void main() 
//{
//	
//}