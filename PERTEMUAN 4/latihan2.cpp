int main(){                 // Fungsi utama atau tempat isi kodingan
    string kalimat;         // Deklarasi variabel string untuk menyimpan kalimat
    int i;                  // Deklarasi variabel integer untuk perulangan

    system("CLS");          // Membersihkan layar konsol pada Windows

    cout << "Masukkan kalimat : "; getline(cin, kalimat);   // Membaca input kalimat dari pengguna, getline digunakan untuk membaca string yang mungkin mengandung spasi

    for (i = 0; i < kalimat.length(); i++) {                // Perulangan akan dilakukan selama i kurang dari panjang kalimat, i akan bertambah 1 setiap iterasi
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u') // Cek apakah karakter adalah huruf vokal
        {
            kalimat[i] = toupper(kalimat[i]);                                                                      // Mengubah huruf vokal menjadi huruf kapital menggunakan fungsi toupper
        }
    }

    cout << "Kalimat dalam huruf kapital : "  << kalimat << endl;   // Menampilkan kalimat yang telah diubah huruf vokalnya menjadi huruf kapital
    return 0;                                                       // Mengembalikan nilai 0 menandakan program telah selesai dengan sukses
}                                                                   // Akhir dari fungsi utama