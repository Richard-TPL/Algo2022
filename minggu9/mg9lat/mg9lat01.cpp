#include <iostream>
using namespace std;

int main () {
	const int Max_Array1 = 3 , Max_Array2 = 4;
	int A[Max_Array1][Max_Array2] = {{3,4,8,0},{3,9,2,1},{6,3,0,2}};
	
	for(int b=0;b<Max_Array1;b++) {
		for(int k=0;k<Max_Array2;k++) {
			cout << A[b][k] << " ";
		}
		cout << endl;
	}
}
