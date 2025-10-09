#include <iostream>
#include <cmath>

using namespace std;

int main(){

//deklarasi variable 
double r , h;
const double pi = 3.14159265;


//input nilai r dan h
cout << "Luas = Pi x r²" <<endl;
cout << "Masukan nilai jari-jari (r) :";
cin >> r;
cout << "Masukan nilai tinggi (h) :";
cin >> h;
//hitunglah luas permukaan tabung
double luas = 2 * pi * r * h  + 2 * pi * r * r;

//tampilkan hasil
cout << "Luas permukaan tabung adalah =" << luas <<endl;

return 0;
}
