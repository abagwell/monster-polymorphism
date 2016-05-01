/*
Name: Andrew Bagwell
Assignment: lab5

*/

#ifndef DRAGON_HPP
#define DRAGON_HPP

#include "monster.hpp"
#include <string>

	class Dragon : public Monster {

		public:
			Dragon();
			virtual int attack(); 
};

#endif