#include <iostream>
using namespace std;

int main () {
	double inci, centi;
	
	cout << "Masukkan ukuran Inci: "; cin >> inci;
	centi = 2.54 * inci;
	cout << "Ukuran dalam centi " << centi << endl;
}
