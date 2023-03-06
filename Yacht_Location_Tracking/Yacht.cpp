#include "Yacht.h"

Yacht::Yacht()
{
	yachtSerialNumber = ++count;
}

Yacht::~Yacht()
{
}

void Yacht::getPosition()
{
	location.getPositos();
}

void Yacht::display()
{
	std::cout << "Yacht " << yachtSerialNumber << " location: ";
	location.display();
	std::cout << "\n";

}
