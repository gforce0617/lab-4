#pragma once
#include <string>

class Step_rocket {
public:
	//�����������
	Step_rocket();
	//����������
	~Step_rocket();
private:
	//��� �������
	std::string type_fuel;
	//����� ������� � �������
	int capacity;
	//���� ������
	float working_time;
};