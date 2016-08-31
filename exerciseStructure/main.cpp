#include <iostream>


struct myPlayer {
	char name[80];	// an array of characters
	float health;
	int score;
	float position;
	float velocity;
};

struct myRectangle {
	float x1;
	float x2;
	float y1;
	float y2;
	float red;
	float green;
	float blue;
};



/*
	An array of characters is a "literal" idea.
	A string is a "logical" idea.

	char blah[64] = "Dinosaur";

	char blah[64] = {'D','i','n','o','s','a','u','r',0};
*/

myPlayer createPlayer();
void	 printPlayer(myPlayer player) {
	printf("Name: %s, Score: %d\n", player.name, player.score);
}


void main()
{
	// array of myPlayer with 5 elements
	myPlayer players[5];

	for(int i = 0; i < 5; ++i)
		players[i] = createPlayer();

	for (int i = 0; i < 5; ++i)
		printPlayer(players[i]);



	getchar();
}



myPlayer createPlayer()
{
	// need data to store input.
	myPlayer player;

	printf("Please enter a name: ");
	scanf_s("%s", player.name, 80);
	getchar();

	printf("Please enter a score: ");
	scanf_s("%d", &player.score);
	getchar();

	
	return player;
}

// # 6


