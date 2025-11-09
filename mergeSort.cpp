#include <iostream>
using namespace std;
void merge(int urutan[], int kiri, int tengah, int kanan){
    int n1 = tengah - kiri + 1;
    int n2 = kanan - tengah;

    int arrKiri[n1];
    int arrKanan[n2];

    for(int i = 0; i < n1; i++){
        arrKiri[i] = urutan[kiri + i];
    }

     for(int j = 0; j < n2; j++){
        arrKanan[j] = urutan[tengah + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = kiri;
    while(i < n1 && j < n2){
        if(arrKiri[i] <= arrKanan[j]){
            urutan[k] = arrKiri[i];
            i++;
        }
        else{
            urutan[k] = arrKanan[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        urutan[k] = arrKiri[i];
        i++;
        k++;
    }
    while(j < n2){
        urutan[k] = arrKanan[j];
        j++;
        k++;
    }
}
void tampilan(int urutan[], int panjang){
    for(int i = 0; i < panjang; i++){
        cout << urutan[i] << " ";
    }
}
void mergeSort(int urutan[], int kiri, int kanan){
    if(kiri < kanan){
        int tengah = kiri + (kanan - kiri) / 2;
        mergeSort(urutan, kiri, tengah);
        mergeSort(urutan, tengah + 1, kanan);
        merge(urutan, kiri, tengah, kanan);
    }
}
int main(){
    int urutan[5] = {1, 3, 4, 5, 2};
    mergeSort(urutan, 0, 4);
    tampilan(urutan, 5);
    return 0;
}