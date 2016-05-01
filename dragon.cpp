/*
Name: Andrew Bagwell
Assignment: lab5

*/

#include <iostream>
#include <stdlib.h>
#include "dragon.hpp"

Dragon::Dragon() {

	attacks = 4;
	strength = 100;
	type = "Dragon";
}

int Dragon::attack() {

	int attackStrength = rand() % (strength + 1);

	int totalDamage = 0;
	int bonus = rand() % 2; // it's either 0 or 1 - 50% chance...
	
	for (int i = 0; i < attacks; i++) {

		attackStrength = rand() % (strength + 1);
		std::cout << "Dragon attacks for " << attackStrength << std::endl; 
		totalDamage = totalDamage + attackStrength;
	}

	if (bonus == 1) {

		std::cout << "Dragon gains an extra attack" << std::endl; 
		attackStrength = rand() % (strength + 1);
		std::cout << "Dragon attacks for " << attackStrength << std::endl; 
		totalDamage = totalDamage + attackStrength;
	}

	std::cout << "Dragon attack total damage: " << totalDamage << std::endl; 

	return totalDamage;
}