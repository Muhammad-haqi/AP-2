#include <iostream>
using namespace std;

//fungsi tanpa nilai balikan
void tampilkanPesan() {
    cout << "=== SELAMAT DATANG DI AP 2 ===" << endl;
}

// fungsi dengan nilai balikan
int tambah(int a, int b) {
    return a + b;
}

// fungsi overload
int kali(int a, int b) {
    return a * b;
}
 double kali(double a, double b) {
    return a * b;
 }

 // fungsi rekursif
 int faktorial (int n) {
    if (n == 0 || n == 1) {
        return 1;
    }else {
        return n * faktorial (n-1);
    }
 }

int main () {
    system ("CLS");

    // menggunakan fungsi tanpa nilai balikan 
    tampilkanPesan();

    int x = 5, y = 3;

    // menggunakan fungsi dengan niilai balikan 
    int hasilTambah = tambah(x, y);
    cout << "hasil penjumlahan : " << hasilTambah << endl;

    // menggunakan fungsi overload
    int hasilKaliInt = kali (x, y);
    double hasilKaliDouble = kali(5.5, 2.0);

    cout << "hasil perkalian (int) : " << hasilKaliInt << endl;
    cout << "hasil perkalian (double) : " << hasilKaliDouble << endl;
    
    // menggunakan fungsi rekursif
    int angka = 5;
    cout << "faktorial dari" << angka << " adalah : " << faktorial (angka) << endl;
}