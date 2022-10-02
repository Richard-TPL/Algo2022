#include <iostream>
using namespace std;

int main () {
	
	int i = 0;
	do {
		if (i == 7) {
			break;
		}
		cout << i << " " ; i++;
	} 
	while (i < 10);
	
	cout << endl << "-------------" << endl;
	int a = 0;
	while (a < 10) {
		a ++;
		if (a % 2 == 0){
			continue;
		}
		cout << a << " ";
	}
}
