#include <iostream>
using namespace std;
void tukar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void heapify(int urutan[], int n, int i){
    int terkecil = i;
    int kiri = 2*i + 1;
    int kanan = 2*i + 2;

    if(kiri < n && urutan[kiri] < urutan[terkecil]){
        terkecil = kiri;
    }
    if(kanan < n && urutan[kanan] < urutan[terkecil]){
        terkecil = kanan;
    }

    if(terkecil != i){
        tukar(urutan[i], urutan[terkecil]);
        heapify(urutan, n, terkecil);
    }
}
void heapSort(int urutan[], int panjang){
    for(int i = panjang/2 - 1; i >= 0; i--){
        heapify(urutan, panjang, i);
    }
    for(int i = panjang - 1; i > 0; i--){
        tukar(urutan[i], urutan[0]);
        heapify(urutan, i, 0);
    }
}
int main(){
    int n; cin >> n;
    int urutan[n];
    for(int i = 0; i < n; i++){
        cin >> urutan[i];
    }
    heapSort(urutan, n);
    for(int i = 0; i < n; i++){
        cout << urutan[i] << " ";
    }
    return 0;
}