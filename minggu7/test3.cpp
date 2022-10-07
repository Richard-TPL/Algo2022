#include <iostream>
using namespace std;

int main () {
	string nama;
	int kegantengan;
	
	cout << "Masukkan nama anda: "; cin >> nama;
	cout << "Masukkan nilai kegantengan (1 - 100): " ; cin >> kegantengan;
	cout << "-----------------------------" << endl;
	(kegantengan > 85) ? (cout << "Anda ganteng.") : (cout << "Perlu oplas.");
}
