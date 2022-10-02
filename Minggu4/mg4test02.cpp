#include <iostream>
using namespace std;

int main () {
	int nilai,uas,uts;
	cout << "masukkan nilai uts anda: ";
	cin >> uts;
	cout << "masukkan nilai uas anda: ";
	cin >> uas;
	cout << "--------------------------------" << endl;
	nilai = ((uts+uas/2));
	cout << "anda ";
	(nilai >= 60) ? cout << "lulus " : cout << "tidak lulus ";
}

