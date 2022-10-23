#include <iostream>
using namespace std;

void hitungVolumeBalok(double alas,double lebar, double tinggi) {
	double volume = alas*lebar*tinggi;
	cout << "Volume balok adalah: " << volume << endl;
}

int main () {
	double alas,lebar,tinggi;
	cout << "Masukkan alas: "; cin >> alas;
	cout << "Masukkan lebar: "; cin >> lebar;
	cout << "Masukkan tinggi "; cin >> tinggi;
	hitungVolumeBalok(alas, lebar, tinggi);
}
