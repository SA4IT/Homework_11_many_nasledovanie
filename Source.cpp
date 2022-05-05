#include "Header.h"


void Screen:: Print_screen() {
	cout << "Экран со следющими харак-ми:" << endl;
	cout << "- Диагональ " << diagonal << endl;
	cout << "- Разрешение " << permission << " pix" << endl;
	cout << "- Частота обновления " << update_frequency << " hz"<< endl;
	if (this->matte == 1) {
		cout << "- С матовым покрытием" << endl;
	}
	cout << "- Технология " << technology << endl;
}

void Keyboard:: Print_keyboard() {
	cout << "Также данное устройство имеет клавиатуру со следющими харак-ми:" << endl;
	if (illumination == 1) {
		cout << "- С подсветкой" << endl;
	}
	if (bluetooth == 1) {
		cout << "- С подключением bluetooth" << endl;
	}
	if (bluetooth == 0) {
		cout << "- С проводным подключением" << endl;
	}
}





void Laptop::  Print_laptop() {
	cout << "Данный ноутбук имеет " << number_of_cores << " ядер, " << SSD << " SSD и " << RAM << " RAM" << endl;
}

void Telephone:: Print_telephone() {
	if (NFC == 0) {
		cout << "Данный телефон имеет операционную систему" << operating_system << " и камеру " << camera << " МПикс" << endl;
	}
	if (NFC == 1) {
		cout << "Данный телефон имеет операционную систему " << operating_system << " и камеру " << camera << " МПикс и НФС" << endl;
	}
}

void Stationary_computer::Print_stationary_compute() {
	cout << "Данный персональный компьютер имеет процессор " << processor << ", мышку " << mouse << ", частоту процессора " << processor_frequency << " ГГц, максимальную оперативной памятью "<< max_RAM <<" ГБ и " << SSD <<" SSD"<< endl;

}
