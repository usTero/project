#include <iostream>
using namespace std;

void tampilkantabungan(double tabungan);
double setortunai();
double tariktunai(double uang);

int main(){
    double tabungan = 5000;
    int pilihan = 0;
    do{
        cout << "***********************\n" 
            << "Masukkan Pilihan anda: \n"
            << "***********************\n"
            << "1. Perlihatkan Tabungan \n"
            << "2. Tarik Tunai\n"
            << "3. Setor Tunai\n"
            << "4. keluar \n";
        cin >> pilihan;
        switch(pilihan){
            case 1: 
                tampilkantabungan(tabungan);
                break;   
            case 2:
                tabungan = tabungan - tariktunai(tabungan);
                break;
            case 3:
                tabungan += setortunai();
                break;
            case 4:
                cout << "Terimakasih sudah menggunakan layanan ATM \n\n";
                break;
            default:
                cout << "Input tidak valid! \n\n";
        }
    }while(pilihan != 4);
return 0;
}

void tampilkantabungan(double tabungan){
    cout << "Jumlah tabungan anda adalah : Rp "<< tabungan << "\n\n";
}
double setortunai(){
    double jumlah = 0;
    cout << "Berapa banyak uang yang akan disetor: ";
    cin >> jumlah;
    if(jumlah > 0){
        return jumlah;
    }else{
        cout << "Input tidak valid! \n \n";
        return 0;
    }

}
double tariktunai(double uang){
    double jumlah = 0;
    cout << "Berapa banyak uang yang akan ditarik tunai: ";
    cin >> jumlah;
    if(jumlah > uang){
        cout << "Saldo anda tidak mencukupi \n \n";
        return 0;
    }else{
        return jumlah;
    }
}
