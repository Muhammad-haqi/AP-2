#include <iostream>         // header untuk C++
using namespace std;        // menggunakan namespace std agar tidak perlu menulis std:: sebelum fungsi cout, cin, dll

int main() {                // Fungsi utama atau tempat isi kodingan

    system ("CLS");                         // Membersihkan layar konsol pada Windows
    string password, sandi, expected = "";  // Deklarasi variabel string untuk menyimpan password, sandi, dan expected

    cout << "Masukkan kata sandi : ";        // Menampilkan pesan untuk memasukkan kata sandi
    cin >> password;                         // Membaca input kata sandi dari pengguna

    cout << "Masukkan kata : ";              // Menampilkan pesan untuk memasukkan kata
    cin >> sandi;                            // Membaca input kata dari pengguna 

    // Membuat string "expected" berdasarkan pola tertentu
    for (int i = 0; i < password.length(); i++) {   // Perulangan akan dilakukan selama i kurang dari panjang password
        expected += password.substr(0, i + 1);      //pasword.substr() digunakan untuk mengambil substring dari password
                                                    // Mengambil substring dari password dari indeks 0 hingga i+1 dan menambahkannya ke expected
    }

    // Mengecek apakah input kedua sesuai dengan pola yang diharapkan
    if (expected == sandi) {                         // Jika expected sama dengan sandi
        cout << "Tulisan agen benar" << endl;        // Menampilkan pesan bahwa tulisan agen benar
    } else {                                         // Jika expected tidak sama dengan sandi
        cout << "Tulisan agen salah" << endl;        // Menampilkan pesan bahwa tulisan agen salah
    }

    return 0;                                        // Mengembalikan nilai 0 menandakan program telah selesai dengan sukses
}                                                    // Akhir dari fungsi utama