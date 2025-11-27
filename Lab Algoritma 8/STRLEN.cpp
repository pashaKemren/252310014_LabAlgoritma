#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char huruf [20];
	char pindah [20];
	//clrscr();
	
	cout << "Masukan Sembarang Kata =";
	cin >> huruf;
	
	cout << "Panjang Kata Yang Diinputkan =";
	cout << strlen (huruf);
	
	getchar();
}

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
