#include <iostream>
using namespace std;

int main () {
	int n,i=1,j;
	
	cin >> n;
	cout << "-------------------------------" << endl;
	for (i=1;i<=n;i++) {
		for(int j=1;j<=n-i;j++) {
			cout << " ";
		}
		for (j=1;j<2*i;j++) {
			cout << i;
		}
	cout << "\n";
	}
}
