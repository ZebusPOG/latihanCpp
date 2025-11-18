#include <iostream>
using namespace std;
int main(){
    int urutan[32] = {1, 1};
    for(int i = 2; i < 32; i++){
        urutan[i] = 0;
        for(int j = i - 1; j >= 0; j--){
            urutan[i] += urutan[j];
        }
    }

    for(int i = 0;i < 32;i++){
        cout << urutan[i] << " ";
    }
    return 0;
}