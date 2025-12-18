#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

void tambah(int *c, int *d);

int main ()
{
	int a, b;
	a = 4;
	b = 6;
	
	cout << "nilai sebelum pemanggilan fungsi";
	cout << "\na = " << a << " b = " << b;
	tambah (&a, &b);
	cout << endl;
	cout << "\nNilai setelah pemanggilan fungsi ";
	cout << "\na = " << a << "b = " << b;
	getch();
}

void tambah (int *c, int *d)
{
	*c += 7;
	*d += 5;
	cout << endl;
	cout << "\nNilai di akhir fungsi ditambah ()";
	cout << "\nc = " << *c << " d = " << *d;
}
