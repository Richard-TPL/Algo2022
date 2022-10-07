#include <iostream>
using namespace std;

int main () {
	
	for(int b=10;b <= 30;b++) {
		if (b % 2 == 0) {
			continue;
		}
		if ( b == 21) {
			continue;
		}
		if (b == 27) {
			continue;
		}
		cout << b << " ";
}
}
