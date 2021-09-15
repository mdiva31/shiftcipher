/*
Nama : Muhammad Diva Eka Andriana
NPM : 140810190022
Kelas : B
Mata Kuliah : Kriptografi
Deskripsi Program : Konversi Huruf menggunakan Shift Cipher
*/

#include <iostream>
#include <string.h>
using namespace std;

string enkripsi(string teks, int key)
{
        char ch;
        for(int i = 0; teks[i] != '\0'; ++i) {
            ch = teks[i];
            // Enkripsi Huruf Kecil
            if (ch >= 'a' && ch <= 'z') {
                ch = ch + key;
                if (ch > 'z') {
                    ch = ch - 'z' + 'a' - 1;
                }  
                teks[i] = ch;
            }
            // Enkripsi Huruf Kapital
            else if (ch >= 'A' && ch <= 'Z') {
                ch = ch + key;
                if (ch > 'Z') {
                    ch = ch - 'Z' + 'A' - 1;
                }
                teks[i] = ch;
            }
        }
        return teks;
} 

string dekripsi (string teks, int key)
{ 
    char ch;
    for(int i = 0; teks[i] != '\0'; ++i) {
            ch = teks[i];
            // Dekripsi Huruf Kecil
            if(ch >= 'a' && ch <= 'z') {
                ch = ch - key;
                if(ch < 'a') {
                    ch = ch + 'z' - 'a' + 1;
                }
            teks[i] = ch;
            }
            // Dekripsi Huruf Kapital
            else if(ch >= 'A' && ch <= 'Z') {
                ch = ch - key;
                if(ch < 'A') {
                    ch = ch + 'Z' - 'A' + 1;
                }
                teks[i] = ch;
            }
        }
    return teks;
}

main() {
    string menuUlang;
    int key;
    do
    {
        cout << "====================="<<endl;
        cout << "PROGRAM SHIFT CIPHER" << endl;
        cout << "====================="<<endl;

        cout << "Inputkan Nama Saudara : ";
        string teks = "";
        getline(cin >> ws, teks);
        cout << "-----------------------"<<endl;

        cout << "Inputkan Kunci : ";
        cin >> key;
        cout << "-----------------------"<<endl;

        cout << "Teks : " << teks<<endl;
        cout << "Jumlah Pergeseran : "<< key<<endl;
        teks = enkripsi(teks, key);
        cout << "Enkripsi : "<<teks<<endl;
        cout << "Dekripsi : "<<dekripsi(teks,key) <<endl;
        cout << "Apakah anda ingin mengulang program? (Ketikkan Y,y,Yes atau Ya jika ingin memulai program kembali) : ";
        cin >> menuUlang;
    } while(menuUlang == "y" || menuUlang == "Y" || menuUlang == "Yes" || menuUlang == "Ya");
    
    return 0;

}