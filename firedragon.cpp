/*
Name: Andrew Bagwell
Assignment: lab5

*/

#include <iostream>
#include <stdlib.h>
#include "firedragon.hpp"


Firedragon::Firedragon() {

	attacks = 4;
	strength = 100;
	type = "Fire Dragon";
}

int Firedragon::attack() {

	int attackStrength;
	int totalDamage = 0;
	int bonus = rand() % 2; // it's either 0 or 1 - 50% chance...
	int bonus2 = rand() % 2;
	
	
	for (int i = 0; i < attacks; i++) {

		attackStrength = rand() % (strength + 1);
		std::cout << "Fire Dragon attacks for " << attackStrength << std::endl; 
		totalDamage = totalDamage + attackStrength;
		

	}

	if (bonus == 1) {

		std::cout << "Fire Dragon gains an extra attack" << std::endl; 
		attackStrength = rand() % (strength + 1);
		std::cout << "Fire Dragon attacks for " << attackStrength << std::endl; 
		totalDamage = totalDamage + attackStrength;
	}

	if (bonus2 == 1) {

		bonus2 = rand() % 2;

		std::cout << "Fire Dragon get to attack ALL OVER AGAIN!" << std::endl; 

		for (int i = 0; i < attacks; i++) {

			totalDamage = totalDamage + attackStrength;
			std::cout << "Fire Dragon attacks for " << attackStrength << std::endl; 
		}

		if (bonus == 1) {

			std::cout << "Fire Dragon gains an extra attack" << std::endl; 
			attackStrength = rand() % (strength + 1);
			std::cout << "Fire Dragon attacks for " << attackStrength << std::endl; 
			totalDamage = totalDamage + attackStrength;
		}
		
	}

	std::cout << "Fire Dragon attack total damage: " << totalDamage << std::endl; 

	return totalDamage;

}

