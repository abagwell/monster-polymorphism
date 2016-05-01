/*
Name: Andrew Bagwell
Assignment: lab5

*/

#ifndef GOBLIN_HPP
#define GOBLIN_HPP

#include "monster.hpp"
#include <string>

class Goblin : public Monster {

	public:
			Goblin();
			virtual int attack(); 
};

#endif 