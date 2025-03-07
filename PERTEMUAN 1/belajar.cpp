#include <iostream> 
#include <conio.h> // untuk fungsi getch dan getche
using namespace std;

int main() {
     string nama;
     char kom , jenis kelamin ;
     float ip;
     int nim; 

    /*ini untuk komen 
    beberapa baris*/

    cout << "hello world"<< endl;

    cout << "masukan nama anda : ";
    cin >> nama ;
    cout << "masukan kom : ";
    cin >> kom ;
    cout << "masukan ip : ";
    cin >> ip ;
    cout << " masukan nim : ";
    cin >> nim ;
    cout <<  "masukan jenis kelamin (L/P) : ";
    jenis kelamin = getche (); //
    getline(cin,nama); // agar karakter spasi bisa terbaca

    /*untuk output*/
    cout << "nama anda adalah: " << nama << endl;
    cout << "kom anda adalah: " << kom << endl;
    cout << "ip anda adalah: " << ip << endl;
    cout << "nim anda adalah: " << nim << endl;
    putchar (jenis kelamin); // untuk menampilkan karakter

}