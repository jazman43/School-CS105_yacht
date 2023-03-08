#pragma once
#include "Location.h"


class Yacht
{
private:
	//variable for the yacht number set to 0
	int yachtSerialNumber = 0;
	//static poniter variable to keep track of last yacht number
	static int* lastSerialNumber;
	//creating a location with the location class
	Location location;

public:
	//class consructor
	Yacht();
	//class deconsructor 
	~Yacht();
	//calls locaition getPosition() and loops over it for longtitute and latitute 
	void getPosition();
	//display yacht number and calls locaition display
	void display();

};

