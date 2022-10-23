#include <iostream>
using namespace std;

int main () {
	int i,j,a[3][4],b[3][4],c[3][4];
	
	cout<< "input matriks a" << endl;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			cout<<"  Input Baris "<<(i+1)<<" , Kolom "<<(j+1)<<" = ";
			cin>>a[i][j];
		}
		cout<<endl;
	}
	
	cout<< "imput matriks b" << endl;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			cout<<"  Input Baris "<<(i+1)<<" , Kolom "<<(j+1)<<" = ";
			cin>>b[i][j];
		}
		cout<<endl;
	}
	
	cout << "Matriks a" << endl;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout << "Matriks b" << endl;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout << "Pemjumlahan a + b =" << endl;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			c[i][j]=a[i][j] + b[i][j];
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}
