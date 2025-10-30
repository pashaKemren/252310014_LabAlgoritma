#include <iostream>
using namespace std;

int main() {
	int angka [6];
	int terbesar, terkecil;
	
	cout << "masukan 5 bilangan: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << "nilai ke-" << i + 1 << " : ";
		cin >> angka [i];
	}
	
	terbesar = angka [0];
	terkecil = angka [0];
	
	for (int i = 1; i < 5; i++) {
		if (angka [i] > terbesar)
			terbesar = angka [i];
		if (angka [i] < terkecil)
			terkecil = angka [i];
	}
	
	cout << "\nbilangan terbesar = " << terbesar << endl;
	cout << "bilangan terkecil =" << terkecil << endl;
	
	return 0;
}
