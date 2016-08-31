#include <iostream>


struct Player
{
	vec2 position, velocity;
};


void handleCollision(Player &p1, Player &p2) 
{

}


void update(Player &p, float t)
{
	p.position.x += p.velocity.x * t;
	p.position.y += p.velocity.y * t;


}

