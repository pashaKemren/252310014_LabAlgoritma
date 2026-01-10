#include<iostream>
using namespace std;

int main () {
	string data [3][3];
	int i =0, n= 0;
	string Nama,NPM;
	
	for(int i=0;i<3;i++) {
		cout << "Masukan NPM ke- " << i+1 << " : ";
		cin >> NPM;
		data [n][i] = NPM;
	}
	n=1;
	for(int i=0;i<3;i++) {
	cout << "Masukan Nama ke- " << i+1 << " : ";
	cin >> Nama;
	data [n][i] = Nama;
	}
	cout << endl;
	cout << "Nama" << "\t" << "NPM" << endl;
	
	for (int i=0;i<3;i++) {
		cout << data[1][i] << "\t" << data[0][i] << endl;
	}
	return 0;
}
