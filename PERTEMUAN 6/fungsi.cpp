#include <iostream>
using namespace std;

//fungsi tanpa nilai balikan //fungsi yang tidak mengembalikan nilai apa pun setelah selesai dieksekusi
void tampilkanPesan() {
    cout << "=== SELAMAT DATANG DI AP 2 ===" << endl;
}

// fungsi dengan nilai balikan //fungsi yang mengembalikan nilai ke pemanggilnya setelah selesai melakukan eksekusi
int tambah(int a, int b) {
    return a + b;
}

// fungsi overload //kemampuan untuk mendefinisikan beberapa fungsi dengan nama yang sama dalam lingkup yang sama
int kali(int a, int b) {
    return a * b;
}
 double kali(double a, double b) {
    return a * b;
 }

 // fungsi rekursif //fungsi yang memanggil dirinya sendiri di dalam definisi fungsi tersebut
 int faktorial (int n) {
    if (n == 0 || n == 1) {
        return 1;
    }else {
        return n * faktorial (n-1);
    }
 }

int main () {
    system ("CLS");

    // menggunakan fungsi tanpa nilai balikan //menampilkan teks ke layar atau memproses data, tanpa memerlukan nilai yang dikembalikan
    tampilkanPesan();

    int x = 5, y = 3;

    // menggunakan fungsi dengan niilai balikan //fungsi yang mengembalikan hasil atau nilai ke pemanggilnya
    int hasilTambah = tambah(x, y);
    cout << "hasil penjumlahan : " << hasilTambah << endl;

    // menggunakan fungsi overload //teknik yang memungkinkan Anda mendefinisikan beberapa fungsi dengan nama yang sama
    int hasilKaliInt = kali (x, y);
    double hasilKaliDouble = kali(5.5, 2.0);

    cout << "hasil perkalian (int) : " << hasilKaliInt << endl;
    cout << "hasil perkalian (double) : " << hasilKaliDouble << endl;
    
    // menggunakan fungsi rekursif //fungsi yang memanggil dirinya sendiri secara langsung atau tidak langsung dalam tubuhnya
    int angka = 5;
    cout << "faktorial dari" << angka << " adalah : " << faktorial (angka) << endl;
}