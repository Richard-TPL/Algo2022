#include <iostream>
using namespace std;

int main () {
	int pil,h,J,T; string b;
	
	cout << "Pilihan anda";
	cout << "	1.Baju (Rp 1000) "<< endl;
	cout << "		2.Topi (Rp 500)" << endl; cin >> pil;
	cout << "Jumlah? "; cin >> J;
	cout << "-----------------------------" << endl;
	switch(pil) {
		case 1 :
			b="baju",h=1000;
		break;
		case 2 :
			b="topi",h=500;
}
	cout << "Barang anda " << b << endl;
	T = h*J;
	cout << "Total bayar " << T << endl;
	
}
