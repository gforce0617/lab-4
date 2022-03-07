#pragma once
#include <string>

class Rocket {
	public:
		//�����������
		Rocket(int []);
		//����������
		~Rocket();
		// �������� ����� ������������ �����
		float get_speed(float);
		// ����� �� ������ �� �������� ������ �� �����
		float get_time_to_orbit(float);
		// ���������� �������
		int get_working_step(float);
		void set_step(int []);
		void set_capacity(int []);
		void set_type_fuel(std::string);
	private:
		//��� �������
		std::string type_fuel;
		//����� ������� � ��������
		int capacity[3];
		//������ ��������
		int step[3];
};