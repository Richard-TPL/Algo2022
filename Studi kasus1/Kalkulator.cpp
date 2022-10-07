#include <iostream>
using namespace std;

int main () {
	double bil1,bil2,hasil;
	string Op;
	
	cout << "Masukkan bilangan pertama: "; cin >> bil1;
	cout << "Masukkan bilangan kedua: "; cin >> bil2;
	cout << "Pilihlah Operator: "; cin >> Op;
	if (Op == "+") {
		hasil = bil1 + bil2;
	} else if (Op == "-") {
		hasil = bil1 - bil2;
	}else if (Op == "*") {
		hasil = bil1 * bil2;
	} else if (Op == "/") {
		hasil = bil1/bil2;
	}
	cout << hasil;
}
