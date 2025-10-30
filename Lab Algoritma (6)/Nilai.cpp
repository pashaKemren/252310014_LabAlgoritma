#include <iostream>
using namespace std;

int main() {
	int nilai [5];
	int total = 0;
	
	cout << "masukan 5 nilai mahasiswa : ";
	for (int i = 0; i < 5; i++) {
		cin >> nilai[i];
		total += nilai[i];
	}
	
	cout << "\ndaftar nilai mahasiswa:" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "nilai ke-" << i + 1 << " = " << nilai [i] << endl;
	}
	
	float ratarata = (float)total / 5;
	cout << "\nrata-rata nilai =" << ratarata << endl;
	
	return 0;
}
