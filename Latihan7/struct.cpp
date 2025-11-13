#include <iostream>
using namespace std;

struct dataDiri{
    string nama;
    int umur;
    string asalKota;
    string status;
};

int main(){
    dataDiri ktp[1];

    for(int i = 0; i < 1; i++){
        cout << "Nama: "; getline(cin, ktp[i].nama);
        cout << "Umur: "; cin >> ktp[i].umur;
        cout << "Asal Kota: "; cin.ignore(); getline(cin, ktp[i].asalKota);
        cout << "Status: "; getline(cin, ktp[i].status);
        }

     for(int i = 0; i < 1; i++){
        cout << "=== Data Diri ===" << endl;
        cout << "Nama: "; cout << ktp[i].nama << endl;
        cout << "Umur: "; cout << ktp[i].umur << endl;
        cout << "Asal Kota: "; cout << ktp[i].asalKota << endl;
        cout << "Status: "; cout << ktp[i].status << endl;
        }

    return 0;
}