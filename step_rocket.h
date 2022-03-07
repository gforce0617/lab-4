#pragma once
#include <string>

class Step_rocket {
public:
	//конструктор
	Step_rocket();
	//деструктор
	~Step_rocket();
private:
	//тип топлива
	std::string type_fuel;
	//объем топлива в ступене
	int capacity;
	//врем работы
	float working_time;
};