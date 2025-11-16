#include <iostream>
using namespace std;
//16 November 2025
struct dataDiri{
    string nama;
    int umur;
    string asalKota;
};

int main(){
    bool reply = true;
    int input;
    dataDiri ktp[100];
    int n;
    int posisi = 0;

    do{
        cout << "1. Tambahkan data KTP " << endl;
        cout << "2. Tampilkan seluruh data KTP" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih 1 / 2 / 3: "; cin >> input; cout << endl;
        if(input == 1){
            cout << "Berapa banyak data yang ingin kamu input: "; cin >> n; cin.ignore();
            for(int i = 0; i < n; i++){
                cout << "Data ke - " << i + 1 << ": " << endl;
                cout << "Nama: "; getline(cin, ktp[posisi].nama); 
                cout << "Umur: "; cin >> ktp[posisi].umur; 
                cout << "Asal Kota: "; cin.ignore(); getline(cin, ktp[posisi].asalKota); cout << endl;
                posisi++;
            }
        }
        else if(input == 2){
            cout << "=== Tampilan Seluruh Data ===" << endl;
            for(int i = 0; i < posisi; i++){
                cout << "Nama: " << ktp[i].nama << endl;
                cout << "Umur: " << ktp[i].umur << endl;
                cout << "Asal Kota: " << ktp[i].asalKota << endl << endl;
            }
        }
        else if(input == 3){
            reply = false;
        }
    } while(reply == true);

    cout << "=== Program berhasil tereksekusi ===" << endl;
    return 0;
}