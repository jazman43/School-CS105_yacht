

#include "Yacht.h"


int main()
{
	//creating 3 yacht objects
	Yacht yacht1, yacht2, yacht3;

	//calling the first yacht user input for position
	yacht1.getPosition();


	//calling the second yacht user input for position
	yacht2.getPosition();
	
	//calling the third yacht user input for position
	yacht3.getPosition();

	//calling the first yacht to display locaition to user
	yacht1.display();
	//calling the second yacht to display locaition to user	
	yacht2.display();
	//calling the third yacht to display locaition to user
	yacht3.display();

	system("pause>0");
	
	return 0;
}