#include <iostream>
using namespace std;
int main(){
    cout << "=== Add two numbers ===" << endl;
    int panjang;
    int jawaban;
    cout << "Masukkan panjang sebuah array: "; cin >> panjang;
    int urutan[panjang];
    for(int i = 0; i < panjang; i++){
        cout << "Masukkan angka ke - " << i + 1 << " : " << endl;
        cin >> urutan[i];
    }
    cout << "Masukkan hasil jumlah angka yang kamu inginkan: "; cin >> jawaban;
    for(int i = 0; i < panjang; i++){
        for(int  j = 0; j < panjang; j++){
            if(urutan[i] + urutan[j] == jawaban){
                cout << "2 angka tersebut adalah: " << urutan[i] << " , " << urutan[j] << endl;
            }
        }
    }

    return 0;
}