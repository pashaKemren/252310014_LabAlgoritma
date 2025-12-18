#include <iostream>
using namespace std;

void pertukaran(int *m, int *n);

int main()
{
    int a, b;
    cout << "Masukkan nilai Pertama : ";
    cin >> a;
    cout << "Masukkan nilai Kedua : ";
    cin >> b;
    cout << "\nSebelum pertukaran " << endl;
    cout << "Nilai Pertama = " << a << " Nilai Kedua = " << b << endl;

    pertukaran(&a, &b);
    
    cout << "\nSetelah pertukaran: " << endl;
    cout << "Nilai Pertama = " << a << " Nilai Kedua = " << b << endl;

    return 0;
}

void pertukaran(int *m, int *n)
{
    int tukar;
    tukar = *m;
    *m = *n;
    *n = tukar;
}
