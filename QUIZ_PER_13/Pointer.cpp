#include<iostream>
using namespace std;

void alamat(int *angka) {
	if(*angka < 0) {
		*angka = 0;
	} 
	else if(*angka > 100) {
		*angka = 100;
	}
}

int main () {
	int angka;
	cout << "Masukkan Angka : ";
	cin >> angka;
	alamat(&angka);
	cout << "Angka Setelah Diproses : " << angka << endl;
	return 0;
}
