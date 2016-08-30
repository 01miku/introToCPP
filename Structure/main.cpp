

// Simple and direct representation in memory
// their functions are built into the language
// int, bool, char, float, double, long, short

// Major difference between variables,
// arrays and structures are simply the organization of data

struct Player
{
	float x, y;
	float radius;
	float health;
	int ID;
	char name[64];
	float attackPower;
	float coolDown;
	int inventory[8];
};

void main() 
{
	Player player;
	Player players[5];
	player.x = 4;
	player.inventory[2] = 4;
}

