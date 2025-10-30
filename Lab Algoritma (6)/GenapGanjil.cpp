#include <iostream>
using namespace std;

int main() {
	int angka [8];
	
	cout << "masukan 10 bilangan:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "nilai ke- " << i + 1 << " : ";
		cin >> angka [i];
	}
	
	cout << "\nBilangan genap: " << endl;
	for (int i =0; i < 10; i++) {
		if (angka[i] % 2 == 0)
			cout << angka [i] << " ";
	}
	
	cout << "\n\nbilangan ganjil:" << endl;
	for (int i = 0; i < 10; i++) {
		if (angka [i] % 2 != 0)
			cout << angka[i] << " ";
	}
	
	cout << endl;
	return 0;
}
