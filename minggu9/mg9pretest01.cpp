#include <iostream>
using namespace std;

int main () {
	const int MAX_ARRAY=2000;
	float jumlah, umur[MAX_ARRAY];
	
	for(int i=0;i<MAX_ARRAY;++i) {
		cout << "Masukkan umur: ";cin >> umur[i];
		jumlah = jumlah + umur[i];
	}
	
	cout << "rata-rata umur "<< MAX_ARRAY <<" orang adalah " << jumlah / MAX_ARRAY << endl;
}
