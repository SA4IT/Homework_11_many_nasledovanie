#include "Header.h"


int main() {
	setlocale(LC_ALL, "RUS");
	Laptop LAPTOP(15.6,"1920x1080", 165, true, "IPS", true, true, 8, 512, 16, "AMD");
	LAPTOP.Print_laptop();
	LAPTOP.Print_screen();
	LAPTOP.Print_keyboard();
	cout << "\n";
	cout << "\n";
	Telephone TELEPHONE(6.1, "1792x828", 60, false, "IPS", "IOS", 21.6, true);
	TELEPHONE.Print_telephone();
	TELEPHONE.Print_screen();
	cout << "\n";
	cout << "\n";
	Stationary_computer STATIONARY_COMPUTTER(17.1, "1920x1080", 165, false, "IPS", true, false, "AMD Ryzen 7", "HyperX Pulsefire Raid", 3.7, 64, 512);
	STATIONARY_COMPUTTER.Print_stationary_compute();
	STATIONARY_COMPUTTER.Print_screen();
	STATIONARY_COMPUTTER.Print_keyboard();
	return 0;
}