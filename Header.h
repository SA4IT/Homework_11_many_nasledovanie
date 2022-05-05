#ifndef PR_11
#define PR_11
#include<iostream>
using namespace std;
#include<string>

class Screen {
protected:
	double diagonal;
	string permission;
	double update_frequency;
	bool matte;
	string technology;
public:
	Screen(double temp_diagonal, string temp_permission, double temp_update_frequency, bool temp_matte, string temp_technology)
	{
		diagonal = temp_diagonal; 
		permission = temp_permission;
		update_frequency = temp_update_frequency;
		matte = temp_matte;
		technology = temp_technology;
	}
	void Print_screen();
};

class Keyboard {
protected:
	bool illumination;
	bool bluetooth;
public:
	Keyboard(bool temp_illumination, bool temp_bluetooth)
	{
		illumination = temp_illumination;
		bluetooth = temp_bluetooth;
	}
	void Print_keyboard();
};




class Laptop : public Screen, public Keyboard{
private:
	int number_of_cores;
	int SSD; 
	int RAM;
	string processor;
public:
	Laptop(double temp_diagonal, string temp_permission, double temp_update_frequency, bool temp_matte, string temp_technology, bool temp_illumination, bool temp_bluetooth, int temp_number_of_cores, int temp_SSD, int temp_RAM, string temp_processor) :  Screen(temp_diagonal,temp_permission,temp_update_frequency,temp_matte,temp_technology), Keyboard(temp_illumination, temp_bluetooth)
	{
		number_of_cores = temp_number_of_cores;
		SSD = temp_SSD;
		RAM = temp_RAM;
		processor = temp_processor;
	}
	void Print_laptop();
};

class Telephone : public Screen{
private:
	string operating_system;
	double camera;
	bool NFC;
public:
	Telephone(double temp_diagonal, string temp_permission, double temp_update_frequency, bool temp_matte, string temp_technology, string  temp_operating_system, double temp_camera, bool temp_NFC) : Screen(temp_diagonal, temp_permission, temp_update_frequency, temp_matte, temp_technology)
	{
		operating_system = temp_operating_system;
		camera = temp_camera;
		NFC = temp_NFC;
	}
	void Print_telephone();
};

class Stationary_computer : public Screen, public Keyboard {
private:
	string processor;
	string mouse;
	double processor_frequency;
	int max_RAM;
	int SSD;
public:
	Stationary_computer(double temp_diagonal, string temp_permission, double temp_update_frequency, bool temp_matte, string temp_technology, bool temp_illumination, bool temp_bluetooth, string temp_processor, string temp_mouse, double temp_processor_frequency, int temp_max_RAM, int temp_SSD) : Screen(temp_diagonal, temp_permission, temp_update_frequency, temp_matte, temp_technology), Keyboard(temp_illumination, temp_bluetooth)
	{
		processor = temp_processor;
		mouse = temp_mouse;
		processor_frequency = temp_processor_frequency;
		max_RAM = temp_max_RAM;
		SSD = temp_SSD;
	}
	void Print_stationary_compute();
};
#endif
