#include <iostream>
using namespace std;

void sapa (string nama) { //kata kunci yang digunakan untuk menyatakan bahwa suatu fungsi tidak mengembalikan nilai atau tidak menerima parameter
    cout << "halo " << nama << " ! selamat datang di AP 2 !" << endl;
}
int main() {
    system("CLS");

    string namaPengguna = "alya";

    sapa(namaPengguna);

    return 0;



}