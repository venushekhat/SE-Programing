#include<stdio.h>
main()
{
	struct pokemon{
		int hp;
		int speed;
		int attack;
	};
	struct pokemon pikachu;
	pikachu.attack=60;
	pikachu.hp=20;
	pikachu.speed=100;
	
	struct pokemon vizard;
	pikachu.attack=40;
	pikachu.hp=70;
	pikachu.speed=90;
}
