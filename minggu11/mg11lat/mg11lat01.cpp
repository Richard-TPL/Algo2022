#include <iostream>
using namespace std;

void beratBadanIdeal(double tinggibadan, double percentase) {
	double beratideal = (tinggibadan-100)-((tinggibadan-100)*percentase);
	cout << "Berat badan ideal anda adalah: " << beratideal << endl;
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
	beratBadanIdeal (tinggibadan,percentase);
}
