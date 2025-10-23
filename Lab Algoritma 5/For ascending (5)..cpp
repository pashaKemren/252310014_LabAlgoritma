#include <iostream>
using namespace std;

int main()
{
	int awal,akhir;
	
	cout << "mulai dari = ";
	cin >> awal;
	
	cout << "berakhir di = ";
	cin >> akhir;
	
	for(int a = awal; a <= akhir; a++)
	{
		cout << a << ". I'm happy" <<endl;
	}
	
	return 0;
}
