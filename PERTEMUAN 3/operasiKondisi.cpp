#include <iostream>
using namespace std;

int main() {
    
    system("CLS");

    int nilai; // Deklarasi variabel nilai

    cout << "Masukkan nilai: ";
    cin >> nilai;

    // If statement //struktur kontrol yang memungkinkan eksekusi blok kode tertentu hanya jika kondisi tertentu bernilai benar
    if (nilai <= 65) {
        cout << "Anda tidak lulus" << endl;
    }

//     // If-else statement //struktur kontrol yang memungkinkan program untuk membuat keputusan berdasarkan kondisi tertentu
    if (nilai <= 65) {
        cout << "Anda tidak lulus!" << endl;
    } else {
        cout << "Anda lulus!" << endl;
    }

//     // If-else-if statement //struktur kontrol yang digunakan untuk membuat keputusan berdasarkan beberapa kondisi
    if (nilai == 100) {
        cout << "Anda keceh" << endl;
    } else if (nilai <= 65) {
        cout << "Anda tidak lulus" << endl;
    } else {
        cout << "Anda lulus" << endl;
    }

    // nested if //Nested if statement adalah struktur di mana sebuah pernyataan if diletakkan di dalam pernyataan if lain
    if (nilai <= 65) {
        cout << "anda tidak lulus" << endl;
    } else {
        if (nilai == 100) {
            cout << "anda lulus dan anda hebat" << endl;
        } else {
            cout << "anda lulus" << endl ;
        }
    }

    // switch case //pernyataan kontrol yang memungkinkan Anda memilih salah satu dari beberapa blok kode untuk dijalankan berdasarkan nilai suatu ekspresi
    switch (nilai) {
        case 1:
          cout << "senin" << endl;
          break;
        case 2:
          cout << "selasa" << endl;
          break;
        case 3:
          cout << "rabu" << endl;
          break;
        case 4:
          cout << "kamis" << endl;
          break;
        case 5:
          cout << "jumat" << endl;
          break;
        case 6:
          cout << "sabtu" << endl;
          break;
        case 7:
          cout << "minggu" << endl;
          break;
        default: //selain pernyataan yang ada
          cout << "inputan tidak valid" << endl;
          break;
    }

    // switch range //digunakan untuk melakukan seleksi berdasarkan nilai dari sebuah ekspresi yang menghasilkan nilai integral
    switch (nilai) {
        case 85 ... 100 : cout << "A" << endl;
        break;
        case 80 ... 84: cout << "B+" << endl;
        break;
        case 75 ... 79 : cout << "B" << endl;
        break;
        case 70 ... 74 : cout << "C+" << endl;
        break;
        case 65 ... 69 : cout << "C" << endl;
        break;
        case 60 ... 64 : cout << "D" << endl;
        break;
        default: cout << "E" << endl;
    }

    // ternary operator //operator kondisional yang memungkinkan Anda membuat pernyataan bersyarat dalam satu baris kode
    string checkNum = (nilai % 2 == 0) ? "genap" : "ganjil";
    cout << nilai << " tuh bilangan " << checkNum << " sih " << endl;
}
