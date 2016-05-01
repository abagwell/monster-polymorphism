/*
Name: Andrew Bagwell
Assignment: lab5

*/

#include <iostream>
#include <stdlib.h>
#include "goblin.hpp"


Goblin:: Goblin() {

	attacks = 1;
	strength = 30; 
	type = "Goblin";
}

int Goblin::attack() {

	int attackStrength = rand() % (strength + 1);
	std::cout << "Goblin attacks for " << attackStrength << std::endl;
	int totalDamage = attackStrength;
	int bonus = rand() % 11; 

	if (bonus == 1) {  //RHS could be any number between 1 and 10

		std::cout << "Goblin doubles damage!" << std::endl; 
		totalDamage = totalDamage *2; 
	} 

	std::cout << "Total Damage: " << totalDamage << std::endl; 
	return totalDamage;
}