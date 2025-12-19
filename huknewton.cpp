#include <iostream>
using namespace std;

void force(float mass, float accel);
void accel(float mass, float gaya);
void mass(float accel, float gaya);

int main(){
    float massa, aksel, gaya; 
    int n;
    cout << "\n=================================\n"
         << "Perhitungan gaya (hk. Newton II)\n"
         << "=================================\n"
         << "1. Mencari gaya\n"
         << "2. Mencari percepatan\n"
         << "3. Mencari massa\n"
         << "Masukkan yang ingin kamu cari: ";
    cin >> n;
    cout << "=================================\n";
    switch(n){
        case 1: 
            cout << "\nMasukkan massa benda (Kg): "; cin >> massa;
            cout << "Masukkan percepatan benda (m/s^2): "; cin >> aksel;
            force(massa, aksel);
            break;
        case 2:
            cout << "\nMasukkan massa benda (Kg): "; cin >> massa;
            cout << "Masukkan gaya benda (N): "; cin >> gaya;
            accel(massa, gaya); 
            break;
        case 3:
            cout << "\nMasukkan percepatan benda (m/s^2): "; cin >> aksel;
            cout << "Masukkan gaya benda (N): "; cin >> gaya;
            mass(aksel, gaya);
            break;
        default:
            cout << "Pilihan tidak valid";
            break;
    }
    return 0;
}

void force(float mass, float accel){
    float gaya = mass*accel;
    cout << "\n=================================";
    if (gaya != 0){
        cout << "\nGaya yang dialami benda adalah: " << gaya <<" N";
        cout << "\nBenda ini bergerak.";
    }else{
        cout << "\nGaya yang dialami benda adalah: " << gaya;
        cout << "\nBenda ini diam.";
    }
}
void accel(float mass, float gaya){
   float percep = gaya/mass;
   cout << "\n=================================";
   cout << "\nPercepatan yang dialami benda adalah: " << percep << " m/s^2";
}
void mass(float accel, float gaya){
    float massa = gaya/accel;
    cout << "\n=================================";
    cout << "\nMassa benda adalah: " << massa << " Kg"; 
}