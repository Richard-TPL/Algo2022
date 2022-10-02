#include <iostream>
using namespace std;

int main () {
	int umur,status;
	cout << "masukkan umur anda: ";
	cin >> umur;
	cout << "--------------------------------" << endl;
	cout << "status anda ";
	(umur > 17) ? cout << "dewasa " : cout << "belum dewasa ";
}

