#include <iostream>
using namespace std;
void selectionSorting(int urutan[], int panjang){
    for(int i = 0; i < panjang - 1; i++){
        int posisiTerkecil = i;
        for(int j = i + 1; j < 5; j++){
            if(urutan[j] < urutan[posisiTerkecil]){
                posisiTerkecil = j;
            }
        }
        int temp = urutan[i];
        urutan[i] = urutan[posisiTerkecil];
        urutan[posisiTerkecil] = temp;
    }
}
int main(){
    int urutan[5] = {1, 3, 4 ,2, 5};
    selectionSorting(urutan, 5);
    for(int i = 0; i < 5; i++){
        cout << urutan[i] << " ";
    }
   return 0;
}