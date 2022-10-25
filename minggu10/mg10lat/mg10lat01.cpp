#include <iostream>
using namespace std;

struct Mahasiswa{
	char Nim[9];
	char Nama[25];
	char matakuliah[4];
	int nilai;
	char nilaihuruf;
};

int main () {
	Mahasiswa Mhs[5];
	int i;
	for(i=0;i<3;i++) {
		cout << "Data (" << i+1 << ") :" << endl;
		cout << "	Nim : "; cin >> Mhs[i].Nim;
		cout << "	Nama : "; cin >> Mhs[i].Nama;
		cout << "	Matakuliah : "; cin >> Mhs[i].matakuliah;
		cout << "	Nilai : "; cin >> Mhs[i].nilai;
		cout << endl;
	
	if(Mhs[i].nilai >= 0 && Mhs[i].nilai < 51) {
		Mhs[i].nilaihuruf = 'D';
	} else if (Mhs[i].nilai > 50 && Mhs[i].nilai < 71){
		Mhs[i].nilaihuruf = 'C';
	} else if (Mhs[i].nilai > 70 && Mhs[i].nilai < 91){
		Mhs[i].nilaihuruf = 'B';
	} else if (Mhs[i].nilai > 90 && Mhs[i].nilai <= 100){
		Mhs[i].nilaihuruf = 'A';
	}}
	
	cout << "----------------------" << endl;
	for(i=0;i<3;i++) {
		cout << "Data Mahasiswa " << Mhs[i].Nama;
		cout << "\nNIM : " << Mhs[i].Nim;
		cout << "\nMata Kuliah : " << Mhs[i].matakuliah;
		cout << "\nNilai : " << Mhs[i].nilai;
		cout << "\nNilai Huruf : " << Mhs[i].nilaihuruf << endl << endl;
	}
}
