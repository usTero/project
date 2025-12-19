#include <bits/stdc++.h>
using namespace std;

#define str string
#define ll long long

void solve(int x){
    int force[x][3], best = 0;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < 3; j++){
            cin >> force[i][j];
        }
    }
    int a = 0, b = 0, c = 0;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < 3; j++){
            if(j == 0){
                a += force[i][j];
            }else if(j == 1){
                b += force[i][j];
            }else{
                c += force[i][j];
            }
        }
    }
    if(a == 0 && b == 0 && c == 0){
        cout << "YES" << '\n';
    }else{
        cout << "NO" << '\n';
    }
}   

int main(){
    int a;
    cin >> a;
    solve(a);
    return 0;
}
