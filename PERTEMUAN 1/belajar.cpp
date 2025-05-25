#include <iostream> 
#include <conio.h> // untuk fungsi getch dan getche
using namespace std;

int main() {
     string nama;
     char kom , jenisKelamin ;
     float ip;
     int nim; 

    /*ini untuk komen 
    beberapa baris*/

    cout << "hello world"<< endl;

    cout << "masukan nama anda : ";
    cin >> nama ;

    getline(cin,nama); // agar karakter spasi bisa terbaca

    cout << "masukan kom : ";
    cin >> kom ;
    cout << "masukan ip : ";
    cin >> ip ;
    cout << "masukan nim : ";
    cin >> nim ;
    cout << "masukan jenisKelamin (L/P) : ";
    jenisKelamin = getche (); // agar karakter lngsung tampil tanpa menekan enter
    

    /*untuk output*/
    cout << "\n" "nama anda adalah: " << nama << endl;
    cout << "kom anda adalah: " << kom << endl;
    cout << "ip anda adalah: " << ip << endl;
    cout << "nim anda adalah: " << nim << endl;
    putchar (jenisKelamin); // untuk menampilkan karakter

    getch(); // karakter yang diketik ga di tampilkan di layar

}