#include <string>
#include <iostream>
#include "rocket.h"


//ускорение м/с
float a = 15.;

//конструктор
Rocket::Rocket(int rocket_step[])
{
	Rocket::set_step(rocket_step);
}

//деструктор
Rocket::~Rocket(){}

float Rocket::get_speed(float flight_time)
{
	int working_step;
	working_step = get_working_step(flight_time);
	if (working_step < 3)
	{
		float speed = a * flight_time;
		std::cout << "speed= " << speed << std::endl;
		return speed;
	}
	else
	{
		std::cout << "Orbital flight => speed=inertia" << std::endl;
		return 0;
	}
}
// время до выхода на заданную орбиту от Земли
float Rocket::get_time_to_orbit(float height)
{
	float time_to_orbit;
	time_to_orbit = sqrt(2 * height / a);
	std::cout << "time to orbit = " << time_to_orbit << std::endl;
	return time_to_orbit;
}

// работающая ступень
int Rocket::get_working_step(float flight_time)
{
	//расход литров топлива в сек
	float fuel_consumption = 10.;
	//потраченное топливо
	float fuel_spent;
	fuel_spent = fuel_consumption * flight_time;
	int i=0;
	

	if (fuel_spent < Rocket::capacity[i])
	{
		std::cout << "work " << i + 1 << " step" << std::endl;
		return i;
	}
	else
	{
		fuel_spent = fuel_spent - Rocket::capacity[i];
		i++;
	}

	if (fuel_spent < Rocket::capacity[i])
	{
		std::cout << "work " << i + 1 << " step" << std::endl;
		return i;
	}
	else
	{
		fuel_spent = fuel_spent - Rocket::capacity[i];
		i++;
	}

	if (fuel_spent < Rocket::capacity[i])
	{
		std::cout << "work " << i + 1 << " step" << std::endl;
		return i;
	}
	else
	{
		i++;
		float time_orbital_flight;
		float full_capacity = 0;

		for (int j = 0; j < 3; j++)
			full_capacity += Rocket::capacity[j];
		time_orbital_flight = flight_time - full_capacity / fuel_consumption;
		std::cout << "Orbital flight" << std::endl;
		std::cout << "Orbital flight duration= " << time_orbital_flight << std::endl;
		return i;
	}
}

void Rocket::set_step(int rocket_step[])
{
	for (int i = 0; i < 3; i++)
		Rocket::step[i] = rocket_step[i];
}
void Rocket::set_capacity(int rocket_capacity[])
{
	for (int i = 0; i < 3; i++)
		Rocket::capacity[i] = rocket_capacity[i];
}
void Rocket::set_type_fuel(std::string rocket_type_fuel)
{
	Rocket::type_fuel = rocket_type_fuel;
}
