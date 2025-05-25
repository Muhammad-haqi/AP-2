#include <iostream>
#include <string>

using namespace std;

class ContohAkses {
    private: //pengubah akses yang menentukan bahwa anggota kelas (variabel dan fungsi) hanya dapat diakses dari dalam kelas itu sendiri
       int privateVar;
    
    protected: //penentu akses yang menentukan visibilitas anggota kelas (anggota data dan fungsi)
       int protectedVar;

    public: //"access specifier", yang menentukan aksesibilitas anggota (atribut dan fungsi) kelas tersebut
       int publicVar;

       // constructor //metode khusus yang dipanggil secara otomatis saat objek dari suatu kelas dibuat
       ContohAkses() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
       }
      

    void tampilkanSemua() {
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

// kelas turunan //kelas yang dibuat berdasarkan kelas lain, yang disebut kelas dasar (base class) atau kelas induk (parent class)
class Turunan : public ContohAkses {
    public:
    void aksesProtected() {
        cout << "Akses publicVar" << publicVar << endl;
        cout << "Akses protectedVar" << protectedVar << endl;
    }
};

int main () {
    system ("cls");

    ContohAkses obj;
    obj.tampilkanSemua();

    cout << "Akses dari luar class : " << endl;
    cout << obj.publicVar << endl;
    // cout << obj.protectedVar << endl; //erorrrrrrrrrrrrrrrr 
    // cout << obj.privateVar << endl; //erorrrrrrrrrrrrrr

    Turunan tur;
    tur.aksesProtected();
}