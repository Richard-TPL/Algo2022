#include <iostream>
using namespace std;

int main () {
	int saldo = 1000000;
	int setor,ambil,opt;
	string retry;
	
	again:
		cout << "1. Setor uang" << endl;
		cout << "2. Ambil uang" << endl;
		cout << "3. Cek saldo" << endl;
		cout << "Mau lakukan apa? "; cin >> opt;
		cout << "-----------------------------" << endl;
		switch(opt) {
			case 1 :
				cout << "masukkan jumlah yang mau disetor: "; cin >> setor;
				cout << "permintaan anda sedang diproses" << endl;
				cout << "Total anda sekarang adalah: " << saldo + setor << endl;
				cout << "-----------------------------" << endl;
				break;
			case 2 :
				cout << "Masukkan jumlah yang mau diambil: "; cin >> ambil;
				cout << "permintaan anda sedang diproses" << endl;
				cout << "Jumlah saldo anda sekarang adalah: " << saldo - ambil << endl;
				cout << "-----------------------------" << endl;
				break;
			case 3 :
				cout << "Saldo anda adalah: " << saldo << endl;
				cout << "-----------------------------" << endl;
				break;
		}
		cout << "Mau ulang? (y/n) "; cin >> retry;
		cout << "-----------------------------" << endl;
			if (retry == "y" || retry == "Y") {
				goto again;
			}
	return 0;
}
