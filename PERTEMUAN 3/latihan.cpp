#include <iostream>
using namespace std;

int main() {

    system("CLS");
    
    int nilai;

    
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> nilai;

    if (nilai % 10 == 0) {
        cout << nilai << " adalah kelipatan 10." << endl;
    } else if (nilai % 5 == 0) {
        cout << nilai << " adalah kelipatan 5." << endl;
    } else {
        cout << nilai << " bukan kelipatan 5 atau 10." << endl;
    }

    return 0;
}
