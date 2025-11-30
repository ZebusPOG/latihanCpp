#include <iostream>
using namespace std;
int main(){
    int nilai;  
    cout << "Masukkan sebuah nilai IPK(bilangan bulat): "; cin >> nilai;
    switch(nilai){
        case 1:
            cout << "Sangat jelek" << endl;
            break;
        case 2:
            cout << "jelek" << endl;
            break;
        case 3:
            cout << "Cukup bagus" << endl;
            break;
        case 4:
            cout << "Sangat bagus" << endl;
            break;
        default:
            cout << "ERROR" << endl;
            cout << "Tolong masukkan angka antara 1 sampai 4!!!" << endl;
    }
    return 0;
}