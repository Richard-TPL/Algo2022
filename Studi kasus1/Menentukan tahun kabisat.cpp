#include <iostream>
using namespace std;

int main () {
	int tahun=0;
	
	cin >> tahun;
	while(tahun < 1900 || tahun > 2020) {
		cin >> tahun;
	}
	if(tahun %4==0) {
		cout << "Tahun kabisat";
	}else {
		cout << "Bukan tahun kabisat";
	}
	return 0;
}
