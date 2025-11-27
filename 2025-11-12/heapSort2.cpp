#include <iostream>
using namespace std;
void tukar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void heapify(int arr[], int n, int i){
    int terbesar = i;
    int kiri = 2*i + 1;
    int kanan = 2*i + 2;

    if(kiri < n && arr[kiri] > arr[terbesar]){
        terbesar = kiri;
    }
    if(kanan < n && arr[kanan] > arr[terbesar]){
        terbesar = kanan;
    }
    if(terbesar != i){
        tukar(arr[i], arr[terbesar]);
        heapify(arr, n, terbesar);
    }
}
void heapSort(int arr[], int n){
    for(int i = n/2 - 1; i >= 0; i--){
        heapify(arr, n , i);
    }
    for(int i = n - 1; i > 0; i--){
        tukar(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
int main(){
    int panjang;
    cin >> panjang;
    int urutan[panjang];
    for(int i = 0; i < panjang; i++){
        cin >> urutan[i];
    }
    heapSort(urutan, panjang);
    for(int i = 0; i < panjang; i++){
        cout << urutan[i] << " ";
    }
    return 0;
}