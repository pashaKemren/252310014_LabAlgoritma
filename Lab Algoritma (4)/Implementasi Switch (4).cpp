#include<iostream>
using namespace std;

int main()
{
	char kode;
	
	cout << "Masukan Kode barang [A/B/C] = ";
	cin >> kode;
	
	switch(kode){
		case 'A':
			cout<< "alat olaharaga ";
			break;
		case 'B':
			cout<< "alat elektronik";
		case 'C':
			cout<< "alat masak";
			break;
		default:
			cout<< "anda salah masukan kode ";
			break;			
	}
}
