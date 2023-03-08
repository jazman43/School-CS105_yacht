#pragma once
#include <iostream>

class Location
{

private:
	//variables to store user input 
	int degrees;
	float minutes;
	char direction;
	//variables to store the longtitute, latitute data
	float longtituteMinutes, latituteMinutes;
	int longtituteDegrees, latituteDegrees;
	char latituteDirection, longtituteDirection;
	
	

public:
	//to get user input for position
	void getPositos();
	//to display the position to the user
	void display();

};
