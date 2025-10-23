#include <iostream>
using namespace std;

int main() {
    int n;
    bool Prima = true;

    
    cout << "Masukkan sebuah bilangan: ";
    cin >> n;

    
    if (n <= 1) {
        Prima = false;
    } else {
        
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                Prima = false;
                break; 
            }
        }
    }

    if (Prima) {
        cout << "Termasuk bilangan PRIMA" << endl;
    } else {
        cout << "Bukan termasuk bilangan prima" << endl;
    }

    return 0;
}
