#include <iostream>
using namespace std;

int main () {
	string nama;
	int kegantengan;
	
	cout << "Masukkan nama anda: "; cin >> nama;
	cout << "Masukkan nilai kegantengan (1 - 100): " ; cin >> kegantengan;
	cout << "-----------------------------" << endl;
	switch (kegantengan) {
	case 85 ... 100 : cout << "Anda ganteng.";
		break;
	case 1 ... 84 : cout << "Perlu oplas.";
		break;
	case >=101 : cout << "Boong";
	}
}

