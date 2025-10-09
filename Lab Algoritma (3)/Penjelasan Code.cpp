#include <iostream>              // Library untuk input-output (cout, endl)
using namespace std;             // Agar tidak perlu menulis std:: setiap kali pakai cout

int main() {
    int x = 50;                  // Variabel x diberi nilai awal 50
    int a, b, c, d, e;           // Deklarasi variabel a, b, c, d, e untuk menampung hasil operasi

    // ===== Proses Logika =====
    a = x > 5 + 5;               // Apakah 50 > 10? jika benar hasilnya 1, jika salah hasilnya 0
    b = x > 100;                 // Apakah 50 > 100? jika benar hasilnya 1, jika salah hasilnya 0
    c = a && b;                  // AND -> hasilnya 1 kalau a dan b sama-sama 1, kalau tidak maka 0
    d = a || b;                  // OR -> hasilnya 1 kalau salah satu bernilai 1
    e = !(c);                    // NOT -> membalik nilai c (kalau c = 0 maka hasilnya 1, kalau c = 1 maka hasilnya 0)

    // ===== Output Hasil =====
    cout << "\nNilai a = x > 5 + 5 = " << a << endl;    // Menampilkan hasil a
    cout << "\nNilai b = x > 100 = " << b << endl;      // Menampilkan hasil b
    cout << "\nNilai c = a && b = " << c << endl;       // Menampilkan hasil c
    cout << "\nNilai d = a || b = " << d << endl;       // Menampilkan hasil d
    cout << "\nNilai e = !(c) = " << e << endl;         // Menampilkan hasil e

    getchar();  // untuk menahan program agar tidak langsung menutup, karena program akan menunggu input satu karakter dari keyboard
}

