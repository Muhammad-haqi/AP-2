#include <iostream>
#include <string>
using namespace std;


struct mahasiswa{ // struct : keyword yang digunakan untuk membuat tipe data baru yang mengelompokkan beberapa variabel terkait
    string nama;
    int umur;
    float ipk;
};

int main() {

    system ("cls");

    mahasiswa mhs1;

    mhs1.nama = "haqi";
    mhs1.umur = 19;
    mhs1.ipk = 3.67;

    cout << "nama = " << mhs1.nama << endl;
    cout << "umur = " << mhs1.umur << endl;
    cout << "ipk = " << mhs1.ipk << endl;

    mahasiswa *ptrmhs = &mhs1;
    cout << "nama = " << ptrmhs -> nama << endl;
    cout << "umur = " << ptrmhs -> umur << endl;
    cout << "ipk = " << ptrmhs -> ipk << endl;
}