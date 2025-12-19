#include <iostream>
#include <ctime>
using namespace std;

char pilihanpemain();
char pilihankomputer();
void tampilkanpilihan(char a);
void tentukanpemenang(char a, char b);

int main(){
    char pemain, komputer;
    pemain = pilihanpemain();
    komputer = pilihankomputer();
    
    cout << "**********************************\n";

    cout << "Pilihan kamu: ";
    tampilkanpilihan(pemain);
    cout << "Pilihan komputer: ";
    tampilkanpilihan(komputer);
    cout << endl;

    cout << "Pemenangnya adalah: ";
    tentukanpemenang(pemain, komputer);
}

char pilihanpemain(){
    char pemain;
    cout << "\nGunting-Batu-Kertas!\n";
    do{
        cout << "\nPilih salah satu pilihan di bawah!\n"
             << "**********************************\n"
             << "'g' untuk gunting\n"
             << "'b' untuk batu\n"
             << "'k' untuk kertas\n"
             << "Pilihanmu : ";
        cin >> pemain;
    }while(pemain != 'g' && pemain != 'b' && pemain != 'k');
    return pemain;
}
char  pilihankomputer(){
    srand(time(0));
    int num = rand() % 3 + 1;
    switch(num){
         case 1: return 'g';
         case 2: return 'b';
         case 3: return 'k';
    }
return 0;
}
void tampilkanpilihan(char a){
    switch(a){
        case 'g': cout << "Gunting \n"; break;
        case 'b': cout << "Batu \n"; break;
        case 'k': cout << "Kertas \n"; break;
    }
}
void tentukanpemenang(char a, char b){
    switch(a){
        case 'g': if(b == 'g'){
                    cout << "Seri!\n";
                    break; 
                  }
                  else if(b == 'b'){
                    cout << "Komputer Menang!\n";
                    break; 
                  }else{
                    cout << "Pemain Menang!\n";
                    break;
                  }
        case 'b': if(b == 'b'){
                    cout << "Seri!\n";
                    break; 
                  }
                  else if(b == 'k'){
                    cout << "Komputer Menang!\n";
                    break; 
                  }else{
                    cout << "Pemain Menang!\n";
                    break;
                  }
        case 'k': if(b == 'k'){
                    cout << "Seri!\n";
                    break; 
                  }
                  else if(b == 'g'){
                    cout << "Komputer Menang!\n";
                    break; 
                  }else{
                    cout << "Pemain Menang!\n";
                    break;
                  }    
    }
}
