#include <bits/stdc++.h>
using namespace std;

using ll = long long;

//B1 : đi sort danh sách cạnh theo trong số tăng dần
struct canh{
	int x, y, w;
};

const int maxn = 1001;
int s[maxn], parent[maxn], n, m;
vector<int> adj[maxn];
vector<canh> dscanh;

int find(int u){
	if(u == parent[u]) return u;
	else {
		int x = find(parent[u]);
        parent[u] = x;
        return x;
	}
}

bool Union(int a, int b){
	a = find(a);
	b = find(b);
	if(a == b) return false;
    if(s[a] >= s[b]){
        parent[b] = a;
        s[a] += s[b];
    }
    else {
        parent[a] = b;
        s[b] += s[a];
    }
    return true;
}

void nhap(){
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int x, y, w; cin >> x >> y >> w;
		dscanh.push_back({x, y, w});
	}
	for(int i = 1; i <= n; i++){
		s[i] = 1;
		parent[i] = i;
	}
}

bool cmp(canh a, canh b){
	return a.w < b.w;
}
void kruskal(){
	//sort danh sach canh theo trong so tang dan
	sort(dscanh.begin(), dscanh.end(),cmp);
	// sort(dscanh.begin(), dscanh.end(), [](canh a, canh b)->bool{
	// 	return a.w < b.w;
	// });

	int ans = 0;
	vector<canh> tree;
	for(int i = 0; i < m; i++){
		if(tree.size() == n - 1) break;//da tim duoc cay
		if(Union(dscanh[i].x, dscanh[i].y) == true){
			tree.push_back(dscanh[i]);
			ans += dscanh[i].w;
		}
	}
	if(tree.size() < n - 1){
		cout << "Do thi khong lien thong !\n";
	}
	else{
		cout << "Do dai cay khung cuc tieu :" << ans << endl;
		for(auto it : tree){
			cout << it.x << ' ' << it.y << ' ' << it.w << endl;
		}
	}
}

int main(){
	nhap();
	kruskal();
}
