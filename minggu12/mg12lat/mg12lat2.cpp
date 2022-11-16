#include <iostream>
using namespace std;

double hitungVolumeBalok(double alas,double lebar, double tinggi) {
	double volume = alas*lebar*tinggi;
	return volume;
}

int main () {
	double alas,lebar,tinggi;
	cout << "Masukkan alas: "; cin >> alas;
	cout << "Masukkan lebar: "; cin >> lebar;
	cout << "Masukkan tinggi "; cin >> tinggi;
	cout << "Volume Balok: " <<hitungVolumeBalok(alas,lebar,tinggi);
}
