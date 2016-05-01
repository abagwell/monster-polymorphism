/*
Name: Andrew Bagwell
File: lab5.cpp
*/

#include "monster.hpp"
#include "goblin.hpp"
#include "troll.hpp"
#include "dragon.hpp"
#include "icedragon.hpp"
#include "firedragon.hpp"

#include <cstdlib>
#include <iostream>

int main() {

	srand(1234); 

	Monster* monArray[100];
	int num;

	for (int i = 0; i < 100; i++) {

		num = rand() % 5; 
		switch(num) {

				case 0: monArray[i] = new Goblin; break;
				case 1: monArray[i] = new Troll; break;
				case 2: monArray[i] = new Dragon; break;
				case 3: monArray[i] = new Icedragon; break;
				case 4: monArray[i] = new Firedragon; break; 
		}
	}

	for (int x = 0; x < 100; x++) {

		std::cout << "Monster Number " << x << std::endl; 
		monArray[x]->attack();
		std::cout << std::endl; 
	}

	for (int x = 0; x < 100; x++) {

		delete(monArray[x]);
	}

	return 0;
}
