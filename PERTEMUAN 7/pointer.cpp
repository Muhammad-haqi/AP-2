#include <iostream>
using namespace std;

void penjumlahan(int a, int b) {
    cout << a + b << endl;
}

void penjumlahanPointer(int *a, int *b) {
    *a += *b;
    cout << *a << endl;
}

int main () {
    system ("cls");

    // pointer deklaration //digunakan untuk membuat variabel yang menyimpan alamat memori variabel lain
    int number = 35;
    int *pointer_number = &number;

    cout << "isi variabel number = " << number << endl;
    cout << "alamat dari memori variabel number = " << &number << endl;
    cout << "isi variabel pointer_number = " << pointer_number << endl;
    cout << "isi variabel yang di tunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "alamt memori variabel pointer_number = " << &pointer_number << endl;
    cout << endl;

    //pointer operation //simbol yang digunakan untuk berinteraksi dengan pointer, yang merupakan variabel yang menyimpan alamat memori dari variabel lain
    *pointer_number = 25;
    cout << "isi variabel number = " << number << endl;
    cout << "alamat dari memori variabel number = " << &number << endl;
    cout << "isi variabel pointer_number = " << pointer_number << endl;
    cout << "isi variabel yang di tunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "alamt memori variabel pointer_number = " << &pointer_number << endl;
    cout << endl;

    //pointer in array //variabel yang menyimpan alamat memori dari variabel lain
    int num[] = {1, 2, 3, 4, 5};
    int *pointer_num = num;
    cout << "isi variabel num = " << num[0] << endl;
    cout << "alamat dari memori variabel num = " << &num[4] << endl;
    cout << "isi variabel pointer_num = " << pointer_num << endl;
    cout << "isi variabel yang di tunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "alamt memori variabel pointer_num = " << &pointer_num << endl;

    *pointer_num += 5;
    cout << "isi variabel num = " << num[0] << endl;
    cout << "alamat dari memori variabel num = " << &num[4] << endl;
    cout << "isi variabel pointer_num = " << pointer_num << endl;
    cout << "isi variabel yang di tunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "alamt memori variabel pointer_num = " << &pointer_num << endl;

    //pointer in parameter //variabel yang menyimpan alamat memori dari variabel lain
    int num1 = 5;
    int num2 = 7;
    penjumlahan (num1, num2);
    cout << num1 << endl;
    cout << num2 << endl;  
    penjumlahanPointer (&num1, &num2);
    cout << num1 << endl;
    cout << num2 << endl;  

    // pointer in pointer //variabel yang menyimpan alamat memori dari pointer lain
    int score = 4;
    int *pointer_score = &score;
    int **ptr_pointer_score = &pointer_score; // pointer in pointer
    cout << "isi variabel score = " << score << " dan alamat memorinya " << &score << endl;
    cout << "isi variabel pointer_score " << pointer_score << " dan isi variabel yang di tunjuk oleh pointer_score " << *pointer_score << " alamt memori pointer_score " << &pointer_score << endl;
    cout << "isi variabel ptr_pointer_score " << ptr_pointer_score << " dan isi variabel yang di tunjuk oleh ptr_pointer_score " << *ptr_pointer_score << " alamt memori pointer_score " << &ptr_pointer_score << endl;


    // dynamic pointer //penggunaan pointer untuk menunjuk ke memori yang dialokasikan secara dinamis selama eksekusi program
    int *ptr = new int;
    *ptr = 30;
    cout << "isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;

    delete ptr; 
    cout << "isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;




}