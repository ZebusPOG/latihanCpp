#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void bubbleSort(int urutan[], int panjang){
    for(int i = 0; i < panjang - 1; i++){
        for(int j = 0;j < panjang - i - 1; j++){
            if(urutan[j] > urutan[j + 1]){
                swap(urutan[j], urutan[j + 1]);
            }
        }
    }
}

void tampilanUrutan(int arr[], int panjang){
    for(int i = 0;i < panjang;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int panjang;
    cout << "Masukkan panjang urutan: "; cin >> panjang;
    int urutan[panjang];
    cout << "Masukkan Urutan Angka: ";
    for(int i = 0; i < panjang; i++){
        cin >> urutan[i];
    }
    bubbleSort(urutan, panjang);
    tampilanUrutan(urutan, panjang);
    return 0;
}