#include "Yacht.h"

//assign the variable as a nullptr
int* Yacht::lastSerialNumber = nullptr;

Yacht::Yacht()
{	
	//if last yacht hasnt been created set variable to 0
	if (!lastSerialNumber) {
		lastSerialNumber = new int(0);
	}
	//add one to the last yacht number poniter and assign it to yachtSerialNumber
	yachtSerialNumber = ++(*lastSerialNumber);
}

Yacht::~Yacht()
{
	//if lastserialNumber is used and exsits delete it and set to null poniter clean up
	if (lastSerialNumber && yachtSerialNumber == *lastSerialNumber) {
		delete lastSerialNumber;
		lastSerialNumber = nullptr;
	}
}

void Yacht::getPosition()
{
	//for deviding and displaying yachts
	std::cout << "*****************************************\n";
	std::cout << "\nenter location for yacht: " << yachtSerialNumber << "  \n";
	//loops for longtitute and latitute
	for (int i = 0; i < 2; i++) 
	{		
		location.getPositos();
	}	
	
}

void Yacht::display()
{
	//for displaying yacht number and locaition to user 
	std::cout << "\nYacht " << yachtSerialNumber << " location: \n";
	location.display();
	std::cout << "\n***********************************************\n";

}
