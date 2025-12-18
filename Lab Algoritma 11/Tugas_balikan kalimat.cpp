#include <iostream>
using namespace std;

void balik_kalimat(string kalimat, string &hasil);

int main()
{
    string kalimat, hasil;
    cout << "Masukkan sebuah kalimat : ";
    getline(cin, kalimat);

    balik_kalimat(kalimat, hasil);

    cout << "Kalimat setelah dibalik : " << hasil << endl;

    return 0;
}

void balik_kalimat(string kalimat, string &hasil)
{
    hasil = "";
    int i = kalimat.length();

    while(i > 0)
    {
        hasil += kalimat[i - 1];
        i--;
    }
}
