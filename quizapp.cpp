#include <iostream>
#include <iomanip>
using namespace std;

int periksajawaban(string kunjaw, string input, int byksoal);

int main(){

    string pertanyaan[] = {
        "1. Ibu Kota dari negara Kanada adalah...",
        "2. Planet yang dikenal sebagai “Planet Merah” adalah...",
        "3. Lagu kebangsaan Indonesia adalah..."
    };
    string jawaban[3][4] = {
        {"A. Toronto", "B. Ottawa", "C. Vancouver", "D. Montreal"},
        {"A. Venus", "B. Jupiter", "C. Mars", "D. Saturnus"},
        {"A. Indonesia Raya", "B. Tanah Airku", "C. Garuda Pancasila", "D. Bagimu Negeri"}
    };
    char kuncijaw[] = {'B', 'C', 'A'};

    int bykpilihan = sizeof(jawaban[0])/sizeof(jawaban[0][0]);
    int byksoal = sizeof(pertanyaan)/sizeof(pertanyaan[0]);
    char jwbuser[byksoal];
    
    for(int i = 0; i < byksoal; i++){
        cout << "\n*************************\n"
             << pertanyaan[i] << '\n';
        for(int j = 0; j < bykpilihan; j++){
            cout << jawaban[i][j] << '\n';
        }cout << "Jawaban anda (A / B / C / D): ";
        cin >> jwbuser[i];
        jwbuser[i] = toupper(jwbuser[i]);
        if(jwbuser[i] == kuncijaw[i]){
            cout << "BENAR!\n";
        }else{
            cout << "SALAH!\n"
                 << "Jawabannya adalah: " << kuncijaw[i] << "\n";
        }
    }

    float benar = periksajawaban(kuncijaw, jwbuser, byksoal);
    float soal = byksoal;
    float nilai = (benar/soal)*100;

    cout << "\n**************************\n"
         << "Nilai anda adalah: " 
         << fixed << setprecision(2) << nilai 
         << " %\n\n";

    return 0;
}

int periksajawaban(string kunjaw, string input, int byksoal){
    int jawabenar = 0;
    for(int i = 0; i < byksoal; i++){
        if(kunjaw[i]==input[i]){
            jawabenar+=1;
        }
    }
    return jawabenar;
}

