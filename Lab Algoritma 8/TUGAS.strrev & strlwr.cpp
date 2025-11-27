#include <iostream>
#include <string.h>
using namespace std;

int main() {
char ibik[] = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";

    strlwr(ibik);
    string ibikdibalik = strrev(ibik);

    cout << "kebalikan kalimat :" << ibikdibalik;
}
