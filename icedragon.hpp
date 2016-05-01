/*
Name: Andrew Bagwell
Assignment: lab5

*/

#ifndef ICEDRAGON_HPP
#define ICEDRAGON_HPP

#include "dragon.hpp"
#include <string>

	class Icedragon : public Dragon {

		public: 
			Icedragon();
			virtual int attack(); 
	};



#endif