#include <iostream>
using namespace std;

int main () {
	int n, pil, h, t;
	string k, y, nama;
	cout << "1. VVIP (1000000)" << endl;
	cout << "2. VIP (750000)" << endl;
	cout << "3. Standard (500000)" << endl;
	cout << "4. Melati (250000)" << endl;
	cout << "--------------------------------" << endl;
	cout << "Masukkan nama anda: "; cin >> nama;
	cout << "Masukkan jenis kamar (1-4): "; cin >> pil;
	cout << "Lama inap: "; cin >> n;
	cout << "Dengan sarapan (y/n) 50rb/hr: "; cin >> y;
	cout << "--------------------------------" << endl;
	switch (pil) {
		case 1 :
			k = "VVIP";
			h = 1000000;
		break;
		case 2 :
			k = "VIP";
			h = 750000;
		break;
		case 3 :
			k = "Standard";
			h = 500000;
		break;
		case 4 :
			k = "Melati";
			h = 250000;
		break;
	}
	if (y== "y" || y== "Y"){
		t = (n*h)+(n*50000);
	} else {
		t= (n*h);
	}
	cout << "Terima kasih " << nama << endl;
	cout << "Kamar anda " << k << endl;
	if (y== "y" || y== "Y") {
		cout << "Lama inap anda " << n << " dengan sarapan" << endl;
	} else {
		cout << "Lama inap anda " << n << endl;
	}
	cout << "total harga kamar: " << t << endl;
}
