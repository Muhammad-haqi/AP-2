#include <iostream>
#include <vector>
using namespace std;

int main () {
    system("CLS");
    // Vector Declaration & Initialization
    vector<string> nama_karyawan = {"alya", "parul", "syukron", "aurick", "dzakwan"};

    // Ascending Element of Vector
    // for (int i=0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }

    // for (string karyawan : nama_karyawan){
    //     cout << karyawan << endl;
    // }

    // Add data to vector
    nama_karyawan.push_back("imam");
    // for (int i=0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }

    // Delete data from vector
    nama_karyawan.pop_back();
    nama_karyawan.erase(nama_karyawan.begin() + 3);
    
    for (int i=0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i] << endl;
    }

}