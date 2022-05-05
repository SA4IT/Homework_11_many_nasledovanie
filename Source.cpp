#include "Header.h"


void Screen:: Print_screen() {
	cout << "����� �� ��������� �����-��:" << endl;
	cout << "- ��������� " << diagonal << endl;
	cout << "- ���������� " << permission << " pix" << endl;
	cout << "- ������� ���������� " << update_frequency << " hz"<< endl;
	if (this->matte == 1) {
		cout << "- � ������� ���������" << endl;
	}
	cout << "- ���������� " << technology << endl;
}

void Keyboard:: Print_keyboard() {
	cout << "����� ������ ���������� ����� ���������� �� ��������� �����-��:" << endl;
	if (illumination == 1) {
		cout << "- � ����������" << endl;
	}
	if (bluetooth == 1) {
		cout << "- � ������������ bluetooth" << endl;
	}
	if (bluetooth == 0) {
		cout << "- � ��������� ������������" << endl;
	}
}





void Laptop::  Print_laptop() {
	cout << "������ ������� ����� " << number_of_cores << " ����, " << SSD << " SSD � " << RAM << " RAM" << endl;
}

void Telephone:: Print_telephone() {
	if (NFC == 0) {
		cout << "������ ������� ����� ������������ �������" << operating_system << " � ������ " << camera << " �����" << endl;
	}
	if (NFC == 1) {
		cout << "������ ������� ����� ������������ ������� " << operating_system << " � ������ " << camera << " ����� � ���" << endl;
	}
}

void Stationary_computer::Print_stationary_compute() {
	cout << "������ ������������ ��������� ����� ��������� " << processor << ", ����� " << mouse << ", ������� ���������� " << processor_frequency << " ���, ������������ ����������� ������� "<< max_RAM <<" �� � " << SSD <<" SSD"<< endl;

}
