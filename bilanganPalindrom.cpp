#include <iostream>
using namespace std;
int main(){
    int bilanganAwal;
    cin >> bilanganAwal;
    int temp = bilanganAwal * 1;
    int bilanganBaru = 0;
    int sisa;
    do{
        sisa = temp % 10;
        bilanganBaru = bilanganBaru * 10 + sisa;
        temp /= 10;
    }
    while(temp > 0);
    if(bilanganAwal == bilanganBaru){
        cout << "Bilangan Palindrom";
    }
    else{
        cout << "Bukan Palindrom";
    }
    return 0;
}