/*
Name: Andrew Bagwell
Assignment: lab5

*/

#include <iostream>
#include <stdlib.h>
#include "troll.hpp"

Troll::Troll() {

	attacks = 2;
	strength = 60;
	type = "Troll";
}

int Troll:: attack() {

	int attackStrength;
	int totalDamage = 0;
	int bonus = rand() % 5; 

		if (bonus == 1) {  //RHS could be any number between 0 and 4

			std::cout << "Troll attacks for CRITICAL damage 100" << std::endl; 
			totalDamage = totalDamage + 100; 
		} 	

	for (int i = 0; i < attacks; i++) {

		attackStrength = rand() % (strength + 1);
		std::cout << "Troll attacks for " << attackStrength << " damage" << std::endl;
		totalDamage = totalDamage + attackStrength; 
	}

	std::cout << "Total Damage: " << totalDamage << std::endl;
	return totalDamage;
}
