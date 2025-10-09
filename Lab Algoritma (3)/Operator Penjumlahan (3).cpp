#include <iostream> 
using namespace std;

	int main() 
	{
		int x, y, tambah, kurang, kali, bagi;
		
		cout << "masukan bilangan kesatu = ";
		cin >> x;
		cout << "masukan bilangan kedua = ";
		cin >> y;
		
		tambah = x+y;
		kurang = x-y;
		kali = x*y;
		bagi = x/y;
		
		cout << "jadi hasil penjumlahannya adalah =" <<tambah<<endl;
		cout << "jadi hasil pengurangannya adalah =" <<kurang<<endl;
		cout << "jadi hasil perkaliannya adalah =" <<kali<<endl;
		cout << "jadi hasil pembagiannya adalah =" <<bagi<<endl;
		
		return 0;
	} 		
	
