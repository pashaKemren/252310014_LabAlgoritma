#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char a1[] = "GELO";
	char a2[] = "Gelo";
	char b1[] = "GELO";
	
	cout << "hasil perbandingan " <<a1<< "dan" <<a2<< "->";
	
	cout << strcmp(a1,a2) <<endl;
	
	cout << "hasil perbandingan " <<a2<< "dan" <<a1<<"->";
	
	cout << strcmp(a2,a1) <<endl;
	
	cout << "hasil perbandingan " <<a1<< "dan" <<b1<< "->";
	
	cout <<strcmp(a1,b1) <<endl;
	
	getchar();
}
