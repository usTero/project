#include <bits/stdc++.h>
using namespace std;

char ambiltebakan();
void cetaktebakan(char tebakan, string arrtebak[], string jawaban);

int main(){
    string kata_rahasia = "RISBANG";
    int lenkata = kata_rahasia.size();
    int tebakanbenar = 0;
    string katatebak[lenkata];
    for(int i = 0; i < lenkata; i++){
            katatebak[i] = "_";
        }
    cout << "\n======================="
         << "\nGame Tebak Kata!!"
         << "\n=======================\n"
         << "Kata: ";
    for(int i = 0; i < lenkata; i++){
            cout << katatebak[i] << " ";
        }
    while(tebakanbenar < lenkata){
        char tebakan = ambiltebakan();
        for(int i = 0; i <lenkata; i++){
            if(tebakan == kata_rahasia[i]){
                if(katatebak[i] == "_"){
                    katatebak[i] = tebakan;
                    tebakanbenar++;
                }
            }
        }
        cetaktebakan(tebakan, katatebak, kata_rahasia);
        if(tebakanbenar == lenkata){
            cout << "Selamat! Kamu Berhasil Menebak Kata!!\n";
        }
    }
    return 0;
}

char ambiltebakan(){
    char tebakan;
    cout << "\nMasukkan Tebakan Anda: ";
    cin >> tebakan;
    char uptebak = toupper(tebakan);
    return uptebak;
}

void cetaktebakan(char tebakan, string arrtebak[], string jawaban){
    int lenkat = jawaban.size();
    int trufal = 0;
    for(int i = 0; i < lenkat; i++){
        if(tebakan == jawaban[i])
            if(arrtebak[i] == "_"){
                trufal = 1;
            }else{
                trufal = 2;
            }
    }
    if(trufal == 1){
        cout << "\nHuruf yang kamu tebak ada pada kata!!"
             << "\nKata: ";
        for(int i = 0; i < lenkat; i++){
            cout << arrtebak[i] << " ";
        }
        cout << '\n';
    }else if(trufal == 2){
        cout << "\nHuruf yang kamu tebak sudah ada pada kata!!"
             << "\nKata: ";
        for(int i = 0; i < lenkat; i++){
            cout << arrtebak[i] << " ";
        }
        cout << '\n';
    }else{
        cout << "\nHuruf yang kamu tebak tidak ada pada kata!!"
             << "\nKata: ";
        for(int i = 0; i < lenkat; i++){
            cout << arrtebak[i] << " ";
        }
        cout << '\n';
    }
}
