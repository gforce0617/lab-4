#pragma once
#include <string>

class Rocket {
	public:
		//конструктор
		Rocket(int []);
		//деструктор
		~Rocket();
		// скорость через определенное время
		float get_speed(float);
		// время до выхода на заданную орбиту от Земли
		float get_time_to_orbit(float);
		// работающая ступень
		int get_working_step(float);
		void set_step(int []);
		void set_capacity(int []);
		void set_type_fuel(std::string);
	private:
		//тип топлива
		std::string type_fuel;
		//объем топлива в ступенях
		int capacity[3];
		//список ступеней
		int step[3];
};