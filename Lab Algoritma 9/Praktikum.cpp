#include <iostream>
using namespace std;

int main(){
    int matrik[3][3];
    cout << "Masukkan matriks 3x3:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Masukan nilai matirkx ["<<i<<"]["<<j<<"]: ";
            cin >> matrik[i][j];
        }
    }
    cout <<endl<< "Hasil Matrix:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrik[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
