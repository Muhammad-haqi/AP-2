#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Alamat {
    string jalan;
    string kota;
    int kodePos;
};

struct Mahasiswa{
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // nested struct
};

int main () {

    system ("cls");

    Mahasiswa mhs1;

    // mhs1.nama = "haqi";
    // mhs1.umur = 19;
    // mhs1.ipk = 3.67;

    // mhs1.alamat.jalan = "jalan karya sepakat";
    // mhs1.alamat.kota = "medan";
    // mhs1.alamat.kodePos = "27715";

    // cout << "alamat = " << mhs1.alamat.jalan << mhs1.alamat.kota << mhs1.alamat.kodePos << endl;

    vector<Mahasiswa> mahasiswa;
    int n;
    cout << "masukan banyak mahasiswa : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get();
        cout << "masukan nama : ";
        getline(cin, mhs1.nama);

        cout << "masukan umur : ";
        cin >> mhs1.umur;

        cout << "masukan ipk : ";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1);
    }

    for(int i = 0; i < n; i++) {
        cout << "mahasiswa : " << i + 1 << endl;
        cout << "nama : " << mahasiswa[i].nama << endl;
        cout << "umur : " << mahasiswa[i].umur << endl;
        cout << "ipk : " << mahasiswa[i].ipk << endl;
    }


}