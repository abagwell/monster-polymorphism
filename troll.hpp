/*
Name: Andrew Bagwell
Assignment: lab5

*/

#ifndef TROLL_HPP
#define TROLL_HPP

#include "monster.hpp"
#include <string>

	class Troll : public Monster {

		public: 
			Troll();
			virtual int attack();
	};
	

#endif