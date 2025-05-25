#include <iostream>                                                // header untuk C++ 
using namespace std;                                               // menggunakan namespace std agar tidak perlu menulis std:: sebelum fungsi cout, cin, dll 

int main() {                                                       // Fungsi utama atau tempat isi kodingan
    string kalimat;                                                // Deklarasi variabel string untuk menyimpan kalimat    
    int i;                                                         // Deklarasi variabel integer untuk perulangan  

    system ("CLS");                                                // Membersihkan layar konsol pada Windows       

    cout << "Masukkan kalimat : ";                                 // Menampilkan pesan untuk memasukkan kalimat
    getline (cin, kalimat);                                        // Membaca input kalimat dari pengguna, getline digunakan untuk membaca string yang mungkin mengandung spasi

    // f a r i d 
    for(i = 0; i < kalimat.length(); i++) {                        // Perulangan akan dilakukan selama i kurang dari panjang kalimat i akan bertambah 1 setiap iterasi
        kalimat[i] = toupper(kalimat[i]);                          // Mengubah setiap karakter menjadi huruf kapital menggunakan fungsi toupper    
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;    // Menampilkan kalimat yang telah diubah menjadi huruf kapital

 return 0;                                                          // Mengembalikan nilai 0 menandakan program telah selesai dengan sukses 
}                                                                   // Akhir dari fungsi utama