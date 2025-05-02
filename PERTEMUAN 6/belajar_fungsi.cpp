#include <iostream>
using namespace std;

void sapa (string nama) {
    cout << "halo " << nama << " ! selamat datang di AP 2 !" << endl;
}
int main() {
    system("CLS");

    string namaPengguna = "alya";

    sapa(namaPengguna);

    return 0;



}