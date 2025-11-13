//Program quick sort
#include <iostream>
using namespace std;
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
void quickSort(int urutan[], int kiri, int kanan){
    if(kiri >= kanan){
        return;
    }
    int pivot = kanan;
    int i = kiri - 1;
    for(int j = kiri; j < pivot; j++){
        if(urutan[j] > urutan[pivot]){
            i++;
            swap(urutan[i], urutan[j]);
        }
    }
    swap(urutan[i + 1], urutan[pivot]);
    int posisiPivot = i + 1;
    quickSort(urutan, kiri, posisiPivot - 1);
    quickSort(urutan, posisiPivot + 1, kanan);
}
void tampilan(int arr[], int panjang){
    for(int i = 0; i < panjang; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int panjang;
    cout << "Masukkan panjang urutan: "; cin >> panjang;
    int urutan[panjang];
    cout << "Masukkan urutan angka: ";
    for(int i = 0; i < panjang; i++){
        cin >> urutan[i];
    }
    cout << "Versi Belum Terurut: " << endl;
    tampilan(urutan, panjang);
    quickSort(urutan, 0, panjang - 1);
    cout << "\nVersi Sudah Terurut: " << endl;
    tampilan(urutan, panjang);
    return 0;
}