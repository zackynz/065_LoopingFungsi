#include <iostream>
using namespace std;

int main(){
char pilihan;


    do{
        cout << "Berangkat ambil takjil" << endl;
        cout << "Antri Takjil" << endl;
        cout << "Ambil Takjil" << endl;
        cout << "Apakah mau antri kembali ?" << endl;
        cin >> pilihan;
    }while(pilihan == 'y' || pilihan == 'Y');
}