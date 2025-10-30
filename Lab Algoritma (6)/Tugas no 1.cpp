#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int jumlah = 0;
    cout << "Deret bilangan ganjil: ";
    for (int i = 1; i <= 19; i += 2) {
        cout << i;
        if (i < 19) cout << " + ";
        jumlah += i;
    }
    cout << " = " << jumlah;
    getch();
    return 0;
}
