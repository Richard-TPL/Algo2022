#include <iostream>
using namespace std;

int main () {
	double inci, centi; int opt;
	
	cout << "1. Inci ke centi" << endl;
	cout << "2. centi ke inci" << endl; 
	cout << "-----------------------------" << endl;
	cout << "Pilih konversi yang mau digunakan: "; cin >> opt;
	cout << "-----------------------------" << endl;
	switch(opt) {
		case 1 :
			cout << "Masukkan ukuran Inci: "; cin >> inci;
			cout << "-----------------------------" << endl;
			centi = 2.54 * inci;
			cout << "Ukuran dalam centi: " << centi << endl;
		break;
		case 2 :
			cout << "Masukkan ukuran centi: "; cin >> centi;
			cout << "-----------------------------" << endl;
			inci = centi/2.54;
			cout << "Ukuran dalam Inci: " << inci << endl;
		break;
	}
}
