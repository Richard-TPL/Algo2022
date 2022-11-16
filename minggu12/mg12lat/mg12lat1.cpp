#include <iostream>
using namespace std;

double beratBadanIdeal(double tinggibadan, double percentase) {
	double beratideal = (tinggibadan-100)-((tinggibadan-100)*percentase);
	return beratideal;
}

int main () {
	double tinggibadan,percentase;
	string jenis;
	cout << "Masukkan tinggi badan anda: "; cin >> tinggibadan;
	cout << "Masukkan jenis kelamin(l/p): "; cin >> jenis;
	if(jenis=="l" || jenis=="L") {
		percentase = 0.1;
	} else {
		percentase = 0.15;
	}
	cout << "Berat Ideal anda adalah " << beratBadanIdeal(tinggibadan,percentase);
}
