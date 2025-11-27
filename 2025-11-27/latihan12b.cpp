#include <iostream>
using namespace std;
int main(){
    int urutan[4];
    cout << "Masukkan 4 angka: ";
    for(int i = 0; i < 4; i++){
        cin >> urutan[i];
    }

    // penjumlahan dan pengurangan
    if(urutan[0] + urutan[1] + urutan[2] + urutan[3] == 24){
        cout << urutan[0] << " + " << urutan[1] << " + " << urutan[2] << " + " << urutan[3] << endl;
    }
    else if(urutan[0] + urutan[1] - urutan[2] + urutan[3] == 24){
        cout << urutan[0] << " + " << urutan[1] << " - " << urutan[2] << " + " << urutan[3] << endl;
    }
    else if(urutan[0] + urutan[1] - urutan[2] - urutan[3] == 24){
        cout << urutan[0] << " + " << urutan[1] << " - " << urutan[2] << " - " << urutan[3] << endl;
    }
    else if(urutan[0] - urutan[1] - urutan[2] - urutan[3] == 24){
        cout << urutan[0] << " - " << urutan[1] << " - " << urutan[2] << " - " << urutan[3] << endl;
    }
    else if(urutan[0] - urutan[1] + urutan[2] + urutan[3] == 24){
        cout << urutan[0] << " - " << urutan[1] << " + " << urutan[2] << " + " << urutan[3] << endl;
    }
    else if(urutan[0] - urutan[1] + urutan[2] - urutan[3] == 24){
        cout << urutan[0] << " - " << urutan[1] << " + " << urutan[2] << " - " << urutan[3] << endl;
    }

    //perkalian dan pembagian
    else if(urutan[0] * urutan[1] * urutan[2] * urutan[3] == 24){
        cout << urutan[0] << " * " << urutan[1] << " * " << urutan[2] << " * " << urutan[3] << endl;
    }
    else if(urutan[0] * urutan[1] / urutan[2] * urutan[3] == 24){
        cout << urutan[0] << " * " << urutan[1] << " / " << urutan[2] << " * " << urutan[3] << endl;
    }
    else if(urutan[0] * urutan[1] / urutan[2] / urutan[3] == 24){
        cout << urutan[0] << " * " << urutan[1] << " / " << urutan[2] << " / " << urutan[3] << endl;
    }
    else if(urutan[0] / urutan[1] / urutan[2] / urutan[3] == 24){
        cout << urutan[0] << " / " << urutan[1] << " / " << urutan[2] << " / " << urutan[3] << endl;
    }
    else if(urutan[0] / urutan[1] * urutan[2] / urutan[3] == 24){
        cout << urutan[0] << " / " << urutan[1] << " * " << urutan[2] << " / " << urutan[3] << endl;
    }
    else if(urutan[0] / urutan[1] / urutan[2] * urutan[3] == 24){
        cout << urutan[0] << " / " << urutan[1] << " / " << urutan[2] << " * " << urutan[3] << endl;
    }
    else if(urutan[0] / urutan[1] * urutan[2] * urutan[3] == 24){
        cout << urutan[0] << " / " << urutan[1] << " * " << urutan[2] << " * " << urutan[3] << endl;
    }

    //Penjumlahan Perkalian
    else if(urutan[0] + urutan[1] * urutan[2] + urutan[3] == 24){
        cout << urutan[0] << " + " << urutan[1] << " * " << urutan[2] << " + " << urutan[3] << endl;
    }
    else if(urutan[0] * urutan[1] + urutan[2] * urutan[3] == 24){
        cout << urutan[0] << " * " << urutan[1] << " + " << urutan[2] << " * " << urutan[3] << endl;
    }
    else if(urutan[0] * urutan[1] + urutan[2] + urutan[3] == 24){
        cout << urutan[0] << " * " << urutan[1] << " + " << urutan[2] << " + " << urutan[3] << endl;
    }
    else if(urutan[0] + urutan[1] * urutan[2] * urutan[3] == 24){
        cout << urutan[0] << " + " << urutan[1] << " * " << urutan[2] << " * " << urutan[3] << endl;
    }

    //Pengurangan Pembagian
    else if((urutan[0] / urutan[1] - urutan[2]) / urutan[3] == 24){
        cout << urutan[0] << " / " << urutan[1] << " - " << urutan[2] << " / " << urutan[3] << endl;
    }
    else if(urutan[0] / urutan[1] - urutan[2] / urutan[3] == 24){
        cout << urutan[0] << " / " << urutan[1] << " - " << urutan[2] << " / " << urutan[3] << endl;
    }
    else if(urutan[0] - urutan[1] - urutan[2] / urutan[3] == 24){
        cout << urutan[0] << " - " << urutan[1] << " - " << urutan[2] << " / " << urutan[3] << endl;
    }
    else if(urutan[0] / urutan[1] / urutan[2] - urutan[3] == 24){
        cout << urutan[0] << " / " << urutan[1] << " / " << urutan[2] << " - " << urutan[3] << endl;
    }

    //Campuran Semua
    else if((urutan[0] + urutan[1]) * urutan[2] / urutan[3] == 24){
        cout << urutan[0] << " + " << urutan[1] << " * " << urutan[2] << " / " << urutan[3] << endl;
    }
    else if(urutan[0] * urutan[1] + urutan[2] / urutan[3] == 24){
        cout << urutan[0] << " * " << urutan[1] << " + " << urutan[2] << " / " << urutan[3] << endl;
    }
    else if(urutan[0] * urutan[1] / urutan[2] + urutan[3] == 24){
        cout << urutan[0] << " * " << urutan[1] << " / " << urutan[2] << " + " << urutan[3] << endl;
    }
    else if(urutan[0] / urutan[1] - urutan[2] + urutan[3] == 24){
        cout << urutan[0] << " / " << urutan[1] << " - " << urutan[2] << " + " << urutan[3] << endl;
    }
    else if(urutan[0] * urutan[1] / urutan[2] + urutan[3] == 24){
        cout << urutan[0] << " * " << urutan[1] << " / " << urutan[2] << " + " << urutan[3] << endl;
    }
    else if(urutan[0] * urutan[1] / urutan[2] - urutan[3] == 24){
        cout << urutan[0] << " * " << urutan[1] << " / " << urutan[2] << " - " << urutan[3] << endl;
    }
    else if((urutan[2] - urutan[0]) * urutan[1] + urutan[3] == 24){
        cout << urutan[2] << " - " << urutan[0] << " * " << urutan[1] << " + " << urutan[3] << endl;
    }
    else{
        cout << "Tidak ada operasi yang memeuhi" << endl;
    }
    return 0;
}