

#include "Yacht.h"


int main()
{
	Yacht yacht1, yacht2, yacht3;

	std::cout << "enter location for first yacht: \n";
	yacht1.getPosition();

	std::cout << "enter location for second yacht: \n";
	yacht2.getPosition();
	
	std::cout << "enter location for thired yacht: \n";
	yacht3.getPosition();

	return 0;
}