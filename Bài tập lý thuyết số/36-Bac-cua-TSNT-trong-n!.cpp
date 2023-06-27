sing namespace std;
void Tong(int n, int p){
    int dem = 0;
    for(int i = p ; i<=n ; i*=p){
       dem += n/i;
    }
    cout << dem;
}
int main(){
    int T; cin >> T;
    while(T--){
        int n, p;
        cin >> n >> p;
        Tong(n,p);
        cout << endl;
    }
    
}