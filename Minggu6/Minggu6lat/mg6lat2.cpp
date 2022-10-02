#include <iostream>
using namespace std;

int main () {
	char jawab;
	int a , b;
	
	do {
		cout << "Masukkan Angka Pertama	 : "; cin >> a;
		cout << "Masukkan Angka Kedua	 : "; cin >> b;
		cout << "total adalah " << a + b << " adalah ";
		cout << endl << "-------------" << endl;
		cout << "Coba lagi (Y/T) ? "; cin >> jawab;
		cout << "-------------" << endl;
	}
	while (jawab == 'y' || jawab == 'Y');
	
	return 0;
	
}
