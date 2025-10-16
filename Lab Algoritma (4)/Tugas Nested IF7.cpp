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

	if(rata2>=70){
	
		if(rata2>=85){
			cout << "maka mendapat hadiah uang sebesar Rp.2.500.000";
		}
			else{
				cout << "Maka mendapat hadiah Liburan";
			}
	} else{
		cout << "Maka mendapat hadiah Komputer Core i5";
	}
}
