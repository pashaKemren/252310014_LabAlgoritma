#include <math.h>
#include <iostream>
using namespace std;

void pangkatTiga(int *angka) {
    *angka = pow (*angka, 3); 
}

int main() {
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    pangkatTiga(&angka);  

    cout << "hasil perpangkatan = " << angka;

    return 0;
}
