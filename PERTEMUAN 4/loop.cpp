#include <iostream>     // header untuk C++
using namespace std;    // menggunakan namespace std agar tidak perlu menulis std:: sebelum fungsi cout, cin, dll

int main (){            // Fungsi utama atau tempat isi kodingan
    // goto label       // digunakan untuk melompat ke label tertentu dalam kode
    // hello world, fasilkom-Ti, Ilmu Komputer, IKLC     
    // -> Hello World, IKLC, ilmu komputer, fasilkom-Ti  

//     a:                                       // label a
//         cout << "Hello World" << endl;       // menampilkan "Hello World"(urutan ke1)
//         goto d;                              // melompat ke label d  
        
//     b:                                       // label b
//         cout << "Fasilkom-Ti" << endl;       // menampilkan "Fasilkom-Ti" (urutan ke4)
//         return 0;                    
//     c:                                       //label c
//         cout << "Ilmu Komputer" << endl;     //menampilkan "Ilmu Komputer"(urutan ke3)
//         goto b;                              //melompat ke label b

//     d:                                        // label d
//         cout << "IKLC" << endl;               //menampilkan "IKLC" (urutan ke2)
//         goto c;                               //melompat ke label c

    // menampilkan bilangan genap dari 10-> 2 dengan goto
    // int i = 10;              // inisialisasi variabel i dengan nilai 10
    // genap:
    // if (i % 2 == 0 ){        // jika i habis dibagi 2 (genap)
    //     cout << i << " " ;   // tampilkan nilai i
    //  } i--;                  // kurangi nilai i dengan 1
    // if (i >= 2){             // jika i masih lebih besar atau sama dengan 2
    //     goto genap ;         //akan melompat ke label genap
    // }

    //statment while == berjalan terus ketika keadaannya benar
    // int i = 1 ;
    // while (i <= 10){
    //     if ( i % 2 == 0 ){
    //         cout << i << " "; //akan menampilkan bilangan genap dari 1 sampai 10
    //     } i++;
    // }

    //statment do while == berjalan sekali walaupun keadaannya salah
    // int i = 1;
    // do{
    //     cout << i << endl;                   // akan menampilkan 1
    // } while (i <= 0); // 1 <= 0 == false     // karena kondisi salah, maka hanya akan menampilkan 1 sekali

    //statment for == untuk perulangan yang sudah ditentukan
    // for (inisialisasi, kondisi, increase)
    // for (int i = 1; i <=10 ; i+=2){
    //     cout << " Hello world " << endl; // i = 1, 3, 5, 7, 9 == maka akan munduk sebanyak 5 kali 
    // }

    // Nested for                              //perulangan di dalam perulangan
    // ***** 5 x 5 
    // for (int i = 1; i <= 5; i++){           //menatur baris
    //     for (int j = 1; j <= 5; j++){       // mengatur kolom 
    //         cout << " * ";                  // menampilkan bintang sebanyak 5 kali secara horizontal
    //     }
    //     cout << endl;                       // setelah selesai menampilkan bintang pada satu baris, pindah ke baris berikutnya
    // }

    //segitiga siku-siku  (menggunakan nested for)
//     for (int i = 1; i<= 5; i++){            // mengatur baris
//         for (int j = 1; j<= i; j++){        // mengatur kolom
//             cout << " * ";                  // menampilkan bintang sesuai dengan jumlah baris
//         }
//         cout << endl;                        // setelah selesai menampilkan bintang pada satu baris, pindah ke baris berikutnya
//     }
}                                               // Akhir dari fungsi utama