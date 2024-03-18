#include <iostream>
using namespace std;

string nama;
int nXpander, nPorsche, nAvanza, nBrio, nLamborghini;
int hXpander = 300, hPorsche = 8000, hAvanza = 250, hBrio = 200, hLamborghini = 6000;


void input(){
    cout << "Nama Pembeli : ";
    cin >> nama;
    cout << "Jumlah Xpander : ";
    cin >> nXpander;

    cout << "Jumlah Proche  : ";
    cin >> nPorsche;

    cout << "Jumlah Avanza : ";
    cin >> nAvanza;

    cout << "Jumlah Brio : ";
    cin >> nBrio;

    cout << "Jumlah Lamorghini  : ";
    cin >> nLamborghini;
}

int TotalHarga(){
    return (nXpander * hXpander) + (nPorsche * hPorsche) + (nAvanza * hAvanza) + (nBrio * hBrio) + (nLamborghini * hLamborghini);
}

void Display(){
    cout << "Total Harganya : " << TotalHarga() << endl;
}

int main(){
    char pilihan;
    do{
    input ();
    Display ();
    cout << "Apakah ingin membeli kembali ? ";
    cin >> pilihan;
    }while (pilihan == "y" ||pilihan == "Y");
}