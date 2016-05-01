/*
Name: Andrew Bagwell
Assignment: lab5

*/

#ifndef FIREDRAGON_HPP
#define FIREDRAGON_HPP

#include "dragon.hpp"
#include <string>

	class Firedragon : public Dragon {
		
		public: 
			Firedragon();
			virtual int attack(); 
};

#endif