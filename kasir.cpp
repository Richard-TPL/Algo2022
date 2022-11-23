#include <iostream>
using namespace std;

struct kasir {
	int pil[8],h,tp[8],cost;
	int hrg[8];
	char choice;
};

void menu () {
	float tot, total;
	kasir kas;
	system ("cls");
	cout << "|1. indomie		|" << endl;
	cout << "|2. pasta gigi		|" << endl;
	cout << "|3. buku		|" << endl;
	cout << "|4. pensil		|" << endl;
	cout << "|5. penggaris		|" << endl;
	cout << "|6. pena		|" << endl;
	cout << "|7. spidol		|" << endl;
	cout << "|8. susu		|" << endl;
	for (int i=0; i<8;i++){
	cout << "Silakan input item yang kalian beli: "; cin >> kas.pil[i];
	if (kas.pil[i] == 1) {
		kas.h=3000;
	} else if (kas.pil[i] == 2) {
		kas.h = 10000;
	} else if (kas.pil[i] == 3) {
		kas.h = 10000;
	} else if (kas.pil[i] == 4) {
		kas.h = 2000;
	} else if (kas.pil[i] == 5) {
		kas.h = 5000;
	} else if (kas.pil[i] == 6) {
		kas.h = 3000;
	} else if (kas.pil[i] == 7) {
		kas.h = 8000;
	} else {
		kas.h = 13000;
	} 
	cout << "anda beli item itu berapa banyak? "; cin >> kas.tp[i];
	kas.hrg[i] = kas.tp[i] * kas.h;
	tot+=kas.hrg[i];
	cout << "------------------------------------" << endl;
	cout << "masih ada item lagi(y/t)? "; cin >> kas.choice;
	cout << "------------------------------------" << endl;
	if (kas.choice == 'y') {
		continue;
	} else {
		
		cout << "total yang harus dibayar adalah Rp. " << tot << endl;
		cout << "pembayaran anda? " ; cin >> kas.cost;
		total = kas.cost-tot;
		if (kas.cost > tot) {
			cout << "kembalian anda adalah Rp. " << total;
		} else {
			cout << "tidak ada kembalian";
		}
		break;
	}	
}
}
	
int main () {
		kasir kas;
		menu ();		
}


