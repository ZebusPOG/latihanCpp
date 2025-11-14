#include <iostream>
using namespace std;
void tukar(int &a, int &b){
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
        if(urutan[j] < urutan[pivot]){
            i++;
            tukar(urutan[i], urutan[j]);
        }
    }
    tukar(urutan[i + 1], urutan[pivot]);
    int posisiPivot = i + 1;
    quickSort(urutan, kiri, posisiPivot - 1);
    quickSort(urutan, posisiPivot + 1, kanan);
}
void tampilSort(int urutan[], int panjang){
    for(int i = 0; i < panjang; i++){
        cout << urutan[i] << " ";
    }
}
int main(){
    int n;
    cout << "Masukkan panjang urutan: "; cin >> n;
    int urutan[n];
    cout << "Masukkan " << n << " urutan angka: ";
    for(int i = 0; i < n;i++){
        cin >> urutan[i];
    }
    cout << "Sebelum Terurut: " << endl;
    tampilSort(urutan, n);
    quickSort(urutan, 0, n - 1);
    cout << "\nSetelah Terurut: " << endl;
    tampilSort(urutan, n);
    return 0;
}