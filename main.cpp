#include <string>
#include "rocket.h"
#include <iostream>
#include <stdlib.h>

int main()
{
	int rocket_step[3];
	int i;
	int step_capacity[3];

	std::cout << "step:" << std::endl;
	for (i = 0; i < 3; i++)
		std::cin >> rocket_step[i];
	Rocket* rocket= new Rocket(rocket_step);

	std::cout << "capacity:" << std::endl;
	for (i = 0; i < 3; i++)
		std::cin >> step_capacity[i];
	
	std::string type_of_fuel;
	std::cout << "type of fuel:" << std::endl;
	//std::getline(std::cin, type_of_fuel);
	std::cin >> type_of_fuel;

	rocket->set_capacity(step_capacity);
	rocket->set_type_fuel(type_of_fuel);

	float flight_time;
	std::cout << "flight time=" << std::endl;
	std::cin >> flight_time;
	float height;
	std::cout << "height=" << std::endl;
	std::cin >> height;

	float speed;
	float time_to_orbit;
	int working_step;

	speed=rocket->get_speed(flight_time);
	time_to_orbit = rocket->get_time_to_orbit(height);
	working_step = rocket->get_working_step(flight_time);

	delete rocket;
	system("pause");
	return 0;
}