#include "Location.h"


void Location::getPositos()
{
	std::cout << "enter degrees: ";
	std::cin >> degrees;
	std::cout << "enter minutes: ";
	std::cin >> minutes;
	std::cout << "enter direction (N/S/E/W): ";
	std::cin >> direction;
}

void Location::display()
{
	std::cout << degrees << "\xF8" << minutes << " " << direction;
}
