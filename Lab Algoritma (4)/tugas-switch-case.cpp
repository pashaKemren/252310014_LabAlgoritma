#include <iostream>
using namespace std;

int main(){
	string nama;
	int n1,n2,n3,rata2;
	
	cout << "Program Hitung Nilai Rata-Rata" << endl;
	cout << "Nama Siswa : ";
	getline(cin,nama);
	cout << "Nilai Pertandingan I : ";
	cin >> n1;
	cout << "Nilai Pertandingan II : ";
	cin >> n2;
	cout << "Nilai Pertandingan III : ";
	cin >> n3;
	rata2 = (n1+n2+n3)/3;
	cout << "Siswa yang bernama" << nama<< endl;
	cout << "Memproleh nilai rata-rata" << rata2 << endl;
	
	switch(rata2/10){
		case 10:
		case 9:
		case 8:
			cout << "Hadiah yang didapat adalah Komputer i5" << endl;
			break;
			
		case 7:
			cout << "Hadiah yang didapat adalah uang sebesar Rp. 2.500.000" << endl;
			break;
			
		default:
			cout << "Hadiah yang didapat adalah Hadiah Hiburan" << endl;
			break;
	}
}
