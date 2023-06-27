#include<bits/stdc++.h>
using namespace std;
#define ll long long

// cheo chinh d1[i + j - 1]
// cheo phu d2[i - j + n]
int n, cnt;
int x[100], cot[100], d1[100], d2[100];

void Try(int i){
    // di dat cho cho quan hau o hang i
    for(int j = 1; j <= n; j++){
        if(cot[j] == 0 && d1[i + j - 1] == 0 && d2[i - j + n] == 0){
            x[i] = j;// quan hau nam o hang i va cot j
            cot[j] = 1;
            d1[i + j - 1] = 1;
            d2[i - j + n] = 1;
            if(i == n){
                for(int k = 1; k <= n; k++){
                    cout << "Con hau o hang thu " << k << " nam o cot " << x[k] << endl;
                }
                cout << endl;
                cnt ++;
            }
            Try(i + 1);
            // backtrack
            cot[j] = 0;
            d1[i + j - 1] = 0;
            d2[i - j + n] = 0;            
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        memset(cot, 0, sizeof(cot));
        memset(d1, 0, sizeof(d1));
        memset(d2, 0, sizeof(d2));
        cnt = 0;
        Try(1);
        cout << cnt << endl;
    }
}