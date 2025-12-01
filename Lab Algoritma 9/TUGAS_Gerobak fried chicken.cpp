#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

int main() {
    
    
    const double PAJAK_RATE = 0.10;
    int banyak_jenis;
    long total_bayar_sebelum_pajak = 0;

    
    const int HARGA_DADA = 2500;
    const int HARGA_PAHA = 2000;
    const int HARGA_SAYAP = 1500;

    
    cout << "---------------------------------------" << endl;
    cout << "        GEROBAK FRIED CHICKEN" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Kode | Jenis | Harga (Rp.)" << endl;
    cout << "---------------------------------------" << endl;
    cout << " D   | Dada  | 2500" << endl;
    cout << " P   | Paha  | 2000" << endl;
    cout << " S   | Sayap | 1500" << endl;
    cout << "---------------------------------------" << endl;

    
    cout << "Banyak Jenis : ";
    cin >> banyak_jenis;

    
    int pesanan[banyak_jenis][2];

    
    for (int i = 0; i < banyak_jenis; ++i) {
        char kode_jenis_input;
        int banyak_beli;
        
        cout << "\nJenis Ke - " << i + 1 << " ... <proses counter>" << endl;
        cout << "Jenis Potong [D/P/S] : ";
        cin >> kode_jenis_input;
        cout << "Banyak Beli : ";
        cin >> banyak_beli;

        
        pesanan[i][0] = (int)toupper(kode_jenis_input); 
        pesanan[i][1] = banyak_beli;
    }

    
    cout << "\n\n---------------------------------------" << endl;
    cout << "      GEROBAK FRIED CHICKEN" << endl;
    cout << "---------------------------------------" << endl;
    cout << left << setw(4) << "No."
         << setw(15) << "Jenis Potong"
         << setw(8) << "Harga"
         << setw(8) << "Bayak"
         << setw(10) << "Jumlah" << endl;
    cout << left << setw(4) << ""
         << setw(15) << ""
         << setw(8) << "Satuan"
         << setw(8) << "Beli"
         << setw(10) << "Bayar" << endl;
    cout << "---------------------------------------" << endl;

    
    for (int i = 0; i < banyak_jenis; ++i) {
        char kode = (char)pesanan[i][0];
        int banyak_beli = pesanan[i][1];
        int harga_satuan = 0;
        string jenis_potong = "";
        long jumlah_bayar = 0;

        
        if (kode == 'D') {
            harga_satuan = HARGA_DADA;
            jenis_potong = "Dada";
        } else if (kode == 'P') {
            harga_satuan = HARGA_PAHA;
            jenis_potong = "Paha";
        } else if (kode == 'S') {
            harga_satuan = HARGA_SAYAP;
            jenis_potong = "Sayap";
        } else {
            
            harga_satuan = 0;
            jenis_potong = "Kode Error";
        }

        
        jumlah_bayar = (long)harga_satuan * banyak_beli;
        total_bayar_sebelum_pajak += jumlah_bayar;

        
        cout << fixed << setprecision(0); 
        cout << left << setw(4) << i + 1;
        cout << setw(15) << jenis_potong;
        
        // PERBAIKAN: Gunakan setw yang lebih besar dan right-align untuk harga
        cout << "Rp." << right << setw(5) << harga_satuan; 
        
        // PERBAIKAN: Gunakan setw yang lebih kecil
        cout << right << setw(8) << banyak_beli;
        
        // Output Jumlah Bayar
        cout << " Rp." << jumlah_bayar << endl;
    }

    
    long pajak = (long)(total_bayar_sebelum_pajak * PAJAK_RATE);
    long total_bayar_akhir = total_bayar_sebelum_pajak + pajak;

    
    cout << "---------------------------------------" << endl;
    cout << right << setw(27) << "Jumlah Bayar"
         << " Rp." << total_bayar_sebelum_pajak << endl;
    cout << right << setw(27) << "Pajak 10%"
         << " Rp." << pajak << endl;
    cout << right << setw(27) << "Total Bayar"
         << " Rp." << total_bayar_akhir << endl;
    cout << "---------------------------------------" << endl;

    return 0;
}
