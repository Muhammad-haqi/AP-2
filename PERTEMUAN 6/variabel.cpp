#include <iostream>
using namespace std;

string namaGlobal = "Ilmu ";

void namaVariabel (){
    string namalokal = "komputer";

    // coba Akses 
    cout << namaGlobal << endl;

     // coba akses
    cout << namaGlobal << endl;
}

int main( ) {
    system("CLS");
    namaVariabel( );

    //coba akses 
    cout << namaGlobal << endl;

    // coba akses
    // cout << namalokal << endl; // ora iso 

}