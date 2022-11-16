#include <iostream>
using namespace std;

string huruf (int nilai){
	string hasil;
	if (nilai >= 1000000){
		hasil = 100000;
	} else if (nilai >= 750000 && nilai < 1000000){
		hasil = 75000;
	} else if (nilai >= 500000 && nilai < 750000){
		hasil = 50000;
	} else if ( nilai >= 250000 && nilai < 500000) {
		hasil = 25000;
	} else if (nilai > 0 && nilai < 250000) {
		hasil = "No Diskon";
	}
	return hasil;
}

int main () {
	int angka;
	cout << "Masukkan total belanja anda: "; cin >> angka;
	cout << "Bonus Belanja Anda: " << huruf(angka);
}
