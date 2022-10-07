#include <iostream>
using namespace std;

int main () {
	string nama;
	int kegantengan;
	
	cout << "Masukkan nama anda: "; cin >> nama;
	cout << "Masukkan nilai kegantengan (1 - 100): " ; cin >> kegantengan;
	cout << "-----------------------------" << endl;
	if ( kegantengan >= 85 && kegantengan <= 100) {
		cout << "Anda ganteng.";
	} else if (kegantengan >=1 && kegantengan < 85) {
		cout << "Perlu oplas.";
	} else {
		(kegantengan > 100) ? (cout << "Boong") : (cout << "Salah input");
	}
}

