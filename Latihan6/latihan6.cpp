//Program Quick Sort    
#include <iostream>
using namespace std;
void swap(int &a, int &b){
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
    for(int j = kiri; j < kanan; j++){
        if(urutan[j] < urutan[pivot]){
            i++;
            swap(urutan[i], urutan[j]);
        }
    }
    swap(urutan[i + 1], urutan[pivot]);
    int posisiPivot = i + 1;
    quickSort(urutan, kiri, posisiPivot - 1);
    quickSort(urutan, posisiPivot + 1, kanan);
}
void tampilanSort(int urutan[], int panjang){
    cout << "Urutan Terurut:" << endl;
    for(int i = 0; i < panjang; i++){
        cout << urutan[i] << " ";
    }
}
int main(){
    int urutan[6] = {1, 3, 4, 2, 6, 5};
    quickSort(urutan, 0, 5);
    tampilanSort(urutan, 6);

    return 0;
}