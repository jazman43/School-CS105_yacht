#pragma once
#include "Location.h"


class Yacht
{
private:

	int yachtSerialNumber;
	int count;
	Location location;

public:

	Yacht();
	~Yacht();

	void getPosition();

	void display();

};

