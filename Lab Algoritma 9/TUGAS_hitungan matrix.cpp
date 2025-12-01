#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    const int BARIS = 2;
    const int KOLOM = 2;

    
    int A[BARIS][KOLOM];
    int B[BARIS][KOLOM];
    int Hasil[BARIS][KOLOM]; 

    
    
    cout << "--- INPUT MATRIKS A (2x2) ---" << endl;
    for (int i = 0; i < BARIS; ++i) {
        for (int j = 0; j < KOLOM; ++j) {
            cout << "Masukkan nilai A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "\n--- INPUT MATRIKS B (2x2) ---" << endl;
    for (int i = 0; i < BARIS; ++i) {
        for (int j = 0; j < KOLOM; ++j) {
            cout << "Masukkan nilai B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }
    
    
    cout << "\n--- MATRIKS A dan MATRIKS B ---" << endl;
    for (int i = 0; i < BARIS; ++i) {
        for (int j = 0; j < KOLOM; ++j) {
            cout << setw(3) << A[i][j] << " ";
        }
        cout << "   ";
        for (int j = 0; j < KOLOM; ++j) {
            cout << setw(3) << B[i][j] << " ";
        }
        cout << endl;
    }


    
    cout << "\n--- HASIL PENJUMLAHAN (A + B) ---" << endl;
    for (int i = 0; i < BARIS; ++i) {
        for (int j = 0; j < KOLOM; ++j) {
            Hasil[i][j] = A[i][j] + B[i][j]; 
            cout << setw(3) << Hasil[i][j] << " ";
        }
        cout << endl;
    }


    
    cout << "\n--- HASIL PENGURANGAN (A - B) ---" << endl;
    for (int i = 0; i < BARIS; ++i) {
        for (int j = 0; j < KOLOM; ++j) {
            Hasil[i][j] = A[i][j] - B[i][j]; 
            cout << setw(3) << Hasil[i][j] << " ";
        }
        cout << endl;
    }


    
    
    cout << "\n--- HASIL PERKALIAN (A x B) ---" << endl;
    for (int i = 0; i < BARIS; ++i) {
        for (int j = 0; j < KOLOM; ++j) {
            Hasil[i][j] = 0; 
            for (int k = 0; k < KOLOM; ++k) {
                
                Hasil[i][j] += A[i][k] * B[k][j]; 
            }
            cout << setw(3) << Hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
