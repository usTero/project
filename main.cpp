#include <iostream>
using namespace std;

int cektebakan(int peta[3][3], int baris, int kolom);
void tampilpeta(int pet[3][3], bool tebak);

int main() {
    int baris, kolom;
    cout << "=== Tebak Lokasi Harta Pada Peta 3x3 ===" << endl
         << "Masukkan tebakanmu (baris dan kolom): " << endl; 
    int peta[3][3] = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 0}};
    tampilpeta(peta, false);
    while(true){ 
        cout << "Tebak baris (1-3): "; cin >> baris;
        cout << "Tebak kolom (1-3): "; cin >> kolom;
        bool tebakan = cektebakan(peta, baris-1, kolom-1);
        tampilpeta(peta, tebakan);
        if(tebakan){
            break;
        } 
    }  
return 0;
}

int cektebakan(int peta[3][3], int baris, int kolom){
    if (peta[baris][kolom] == 1){
        cout << "Benar! Kamu menemukan harta!\n";
        return true;
    }else{
        cout << "Masih salah, coba lagi!" << endl;
        return false;   
    }
}
void tampilpeta(int pet[3][3], bool tebak){
    for (int i = 0; i <= 2; ++i){
        for (int j = 0; j <= 2; ++j) {
            if (pet[i][j] == 1 && tebak == true)
                cout << "T ";
            else
                cout << ". ";
            }
        cout << endl;
        }
    cout << '\n';
}
