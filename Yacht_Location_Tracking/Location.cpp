#include "Location.h"


void Location::getPositos()
{
	
	
	//asks user for degrees and stores it in the variable (degrees)
	std::cout << "\nenter degrees between 0 and 180: ";
	std::cin >> degrees;
	//runs a check to see if user input was inbetween 0 and 180
	if (degrees > 180 || degrees < 0)
	{
		std::cout << "INPUTED degrees is out side of expeted please renter degrees\n";
			
	}

	//asks user for minutes and stores it in the variable (minutes)
	std::cout << "enter minutes between 0 and 60: ";
	std::cin >> minutes;
	//runs a check to see if user input was inbetween 0 and 60
	if (minutes > 60 || minutes < 0)
	{
		std::cout << "INPUTED minutes is out side of expeted please renter minutes\n";
			
	}

	//asks user for direction and stores it in the variable (direction)
	std::cout << "enter direction (N/S/E/W): ";
	std::cin >> direction;
	//checks if the input is latitute (N) or (S)
	if (direction == 'n' || direction == 'N' || direction == 's' || direction == 'S')
	{
			//stores user input into the latitute variables
		latituteMinutes = minutes;
		latituteDegrees = degrees;
		latituteDirection = direction;
			
	}
	//checks if the input is longtitute (W) or (E)
	if (direction == 'e' || direction == 'E' || direction == 'w' || direction == 'W')
	{
		//stores user input into the longtitute variables
		longtituteDegrees = degrees;
		longtituteMinutes = minutes;
		longtituteDirection = direction;
			
	}
	
		



}

void Location::display()
{
	
	
	std::cout << latituteDegrees << "\xF8" << latituteMinutes << " " << latituteDirection << " latitute  ";
	
	
	std::cout << longtituteDegrees << "\xF8" << longtituteMinutes << " " << longtituteDirection << " longtitute\n";
	
	
}
