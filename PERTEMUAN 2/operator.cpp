#include <iostream>
using namespace std;

int main() {
    int a, b;

    system ("CLS");

    // Assignment Operator (memasukkan nilai ke dalam sebuah variabel)
    a = 3;
    b = 5;

    Arithmetical Operator
    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    float bagi = (float)a / (float)b; // type casting : berguna untuk mengubah tipe data dari sebuah variabel 
    int modulo = a % b;

    cout << "hasil penjumlahan = " << tambah << endl;
    cout << "hasil pengurangan = " << kurang << endl;
    cout << "hasil perkalian = " << kali << endl;
    cout << "hasil pembagian = " << bagi << endl;
    cout << "hasil sisa bagi = " << modulo << endl;

    //relational operator
    cout << (a==b) << endl;
    cout << (a<b) << endl;
    cout << (a<=b) << endl;
    cout << (a>b) << endl;
    cout << (a>=b) << endl;
    cout << (a!=b) << endl;

    //logical operator (&&,||, !)
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;

    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;

   cout << !true << endl;
   cout << !false << endl;

   //bitwise operator (&, |, ^, ~, >>, <<) --> biner

      cout << (5 & 7) << endl;
      cout << (5 | 7) << endl;
      cout << (5 ^ 7) << endl;
      cout << (~ 7) << endl;
      cout << (7 << 2) << endl;
      cout << (7 >> 2) << endl;

   // shorthand
   a += 7; // a = a + 7;
   cout << a << endl;

   a -= 7; // a = a - 7;
   cout << a << endl;

   a *= 7; // a = a * 7;
   cout << a << endl;

//    a /= 7; // a = a / 7;
   cout << a << endl;

//increment, decrement = penambahan satu dan pengurangan satu

//pre ++a
//post a++

//pre increment
cout << a << endl;
cout << ++a << endl;

cout << b << endl;
cout << ++b << endl;

//post increment
cout << a << endl;
cout << a++ << endl;
cout << a << endl;

cout << b << endl;
cout << b++ << endl;
cout << b << endl;

//pre decrement
cout << a << endl;
cout << --a << endl;

cout << b << endl;
cout << --b << endl;

//post decrement
cout << a << endl;
cout << a-- << endl;
cout << a << endl;

cout << b << endl;
cout << b-- << endl;
cout << b << endl;



}