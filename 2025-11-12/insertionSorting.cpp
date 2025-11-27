#include <iostream>
using namespace std;
int main(){
    int urutan[5] = {2, 1, 4, 5, 3};
    for(int i = 1; i < 5; i++){
        int key = urutan[i]; //3
        int j = i - 1;
        while(j >= 0 && urutan[j] > key){
            urutan[j + 1] = urutan[j];
            j--;
        }
        urutan[j + 1] = key;
    }
    for(int i = 0;i < 5;i++){
        cout << urutan[i] << " ";
    }
    return 0;
}