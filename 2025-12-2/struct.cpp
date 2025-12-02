#include <iostream>
using namespace std;

struct daftarBuku{
    string judul;
    string penulis;
    int tahunTerbit;
};

void tampilkanDaftarBuku(daftarBuku buku[], int p){
    for(int i = 0; i < p; i++){
        cout << "\nBuku ke - " << i + 1 << endl;
        cout << "Judul: " << buku[i].judul << endl;
        cout << "Nama penulis: " << buku[i].penulis << endl;
        cout << "Tahun terbit: " << buku[i].tahunTerbit << endl;
    }
}

int main(){
    int p;
    cout << "Tentukan berapa banyak informasi buku yang ingin kamu tambahkan: "; cin >> p;
    cin.ignore();
    daftarBuku buku[p];
    for(int i = 0; i < p; i++){
        cout << "Judul: "; getline(cin, buku[i].judul); 
        cout << "Nama penulis: "; getline(cin, buku[i].penulis);
        cout << "Tahun terbit: "; cin >> buku[i].tahunTerbit; cin.ignore(); cout << endl;
    }
    tampilkanDaftarBuku(buku, p);
    return 0;
}