#include <iostream>
using namespace std;
int main(){
    int panjang;
    int angka;
    cout << "Masukkan panjang sebuah urutan: "; cin >> panjang;
    int urutan[panjang];
    for(int i = 0; i < panjang; i++){
        cout << "Masukkan urutan ke - " << i + 1 << " : "; 
        cin >> urutan[i];    
    }
    cout << "Masukkan sebuah angka: "; cin >> angka;
    for(int i = 0; i < panjang - 1; i++){
        for(int j = i; j < panjang - i - 1; j++){
            if(urutan[j] + urutan[j + 1] == angka){
                cout << urutan[j] << " + " << urutan[j + 1] << " = " << angka << endl;
            }
        }
    }
    return 0;
}