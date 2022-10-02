#include <iostream>
using namespace std;

int main () {
	int pil, n, h, total;
	string k;
	
	cout << "Warung Goreng" << endl;
	cout << "--------------------------------" << endl;
	cout << "1. Nasi goreng Rp 15.000" << endl;
	cout << "2. Mie goreng Rp 15.000" << endl;
	cout << "3. Kwetiau goreng Rp 20.000" << endl;
	cout << "--------------------------------" << endl;
	cout << "Masukkan pilihan anda (1-3) : "; cin >> pil;
	cout << "Jumlah pesanan: "; cin >> n;
	cout << "--------------------------------" << endl;
	if (pil == 1) {
		k = "Nasi goreng";	h = 15000;
	} else if (pil == 2) {
		k = "Mie goreng"; h = 15000;
	} else if (pil == 3) {
		k = "Mie goreng"; h = 20000;
	} else {
		k = "Salah pilih"; h =0;
	}
	cout << "Menu anda	:" << k << endl;
	cout << "Harga		:" << h << endl;
	cout << "Jumlah pesan	:" << n << endl;
	total = h*n;
	cout << "Total bayar	:" << total << endl;
}
