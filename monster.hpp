/*
Name: Andrew Bagwell
Assignment: lab5

*/

#ifndef MONSTER_HPP
#define MONSTER_HPP

#include <string>

class Monster {

	protected: 
		int attacks;
		int strength;
		std::string type; 

	public:
		~Monster() = default; 
		virtual int attack() = 0; //virtual function
		std::string getType();
};


#endif