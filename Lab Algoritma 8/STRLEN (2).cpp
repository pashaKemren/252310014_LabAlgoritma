#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char kalimat [100];
	
	cout << "masukan kalimat:";
	cin.getline(kalimat, sizeof(kalimat));
	
	int x = strlen (kalimat)
	cout << "kalimat terbalik:";
	
	for (int i = x-1; >= 0; i--) {
		cout << kalimat [i];
	}
	
	cout << endl;
	return 0;
}
