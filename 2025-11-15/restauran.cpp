#include <iostream>
using namespace std;
int main(){
    int input;
    char reply;
    int total = 0;
    do{ 
    cout << "Selamat datang di restauran justin" << endl;
    cout << "Apa yang ingin kamu pesan: " << endl;
    cout << "1. Mie ayam(Rp20.000)" << endl;
    cout << "2. Mie goreng(Rp10.000)" << endl;
    cout << "3. Nasi goreng(Rp15.000)" << endl;
    cin >> input;
    if(input == 1){
        total += 20000;
    }
    else if(input == 2){
        total += 10000;
    }
    else if(input == 3){
        total += 15000;
    }
    cout << "Apakah kamu ingin menambah pesanan?(y/n): "; cin >> reply;
    }
    while(reply == 'y');
    cout << "Total Pembayaran: " << "Rp" << total << endl;
    return 0;
}