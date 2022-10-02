#include <iostream>
using namespace std;

int main () {
	string nama;
	int tugas, uts, uas, t;
	
	cout << "Masukkan nama anda: "; cin >> nama;
	cout << "Nilai tugas: "; cin >> tugas;
	cout << "Nilai uts: "; cin >> uts;
	cout << "Nilai uas: "; cin >> uas;
	cout << "--------------------------------" << endl;
	
	cout << "Selamat " << nama << endl;
	t = (tugas+uts+uas)/3;
	cout << "Nilai anda ((tugas+uts+uas)/3): " << t << endl;
	switch (t) {
		case 0 ... 20:
			cout << "Nilai Huruf: E" << endl;
			cout << "Predikat: Sangat Kurang" << endl;
		break;
		case 21 ... 40:
			cout << "Nilai Huruf: D" << endl;
			cout << "Predikat: Kurang" <<endl;
		break;
		case 41 ... 60:
			cout << "Nilai Huruf: C" << endl;
			cout << "Predikat: Cukup" << endl;
		break;
		case 61 ... 80:
			cout << "Nilai Huruf: B" << endl;
			cout << "Predikat: Baik" << endl;
		break;
		case 81 ... 100:
			cout << "Nilai Huruf: A" << endl;
			cout << "Predikat: Sangat Baik" << endl;
		break;
	}
}
