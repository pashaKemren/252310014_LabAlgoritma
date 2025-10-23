#include <iostream>
using namespace std;

int main() {
    int bilangan;
    char ulang;

    do {
        cout << "Masukkan bilangan: ";
        cin >> bilangan;

        int hasil = 1;
        int i = 1;

        while (i <= bilangan) {
            hasil *= i;
            i++;
        }

        cout << "Hasil " << bilangan << "! = " << hasil << endl;
        cout << "Ulangi lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
