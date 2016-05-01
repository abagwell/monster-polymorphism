/*
Name: Andrew Bagwell
Assignment: lab5

*/

#include <iostream>
#include <stdlib.h>
#include "icedragon.hpp"

Icedragon::Icedragon() {

	attacks = 4;
	strength = 100;
	type = "Ice Dragon"; 
}

int Icedragon:: attack(){

	int attackStrength;
	int totalDamage = 0;
	int bonus = rand() % 2; // it's either 0 or 1 - 50% chance...
	int bonus2 = rand() % 2;
	
	for (int i = 0; i < attacks; i++) {

		attackStrength = rand() % (strength + 1);
		std::cout << "Ice Dragon attacks for " << attackStrength << std::endl; 
		totalDamage = totalDamage + attackStrength;

	}

	if (bonus == 1) {

		std::cout << "Ice Dragon gains an extra attack" << std::endl; 
		attackStrength = rand() % (strength + 1);
		std::cout << "Ice Dragon attacks for " << attackStrength << std::endl; 
		totalDamage = totalDamage + attackStrength;
	}

	if (bonus2 == 1) {

		std::cout << "Ice Dragon DOUBLES damage!" << std::endl; 
		totalDamage = totalDamage * 2; 
	}

	std::cout << "Ice Dragon attack total damage: " << totalDamage << std::endl; 

	return totalDamage;

}