#include <iostream>
using namespace std;
#define harga 4500.02 //...menetukan harga dengan define
int main()
{
	float jumlah,total;
	
	cout << "masukkan jumlah barang =" ;
	cin >> jumlah;
	total = harga * jumlah;
	cout<<"\nYang harus dibayar = " <<total;
}
