#include <iostream>
#include <vector>

using namespace std;

const int maxn = 100010;

int n,m;
vector<bool> c1(maxn,0),c2(maxn,0);
vector<int> adj[maxn];

void dfs(int u){
    

    if(c1[u] or c2[u]) return;

    for(auto& i: adj[u]){
        if(c1[i]) c2[i] = true;
        if(c2[i]) c1[i] = true;
        if(!c1[i] && !c2[i]) c1[i] = true;
        dfs(i);
    } 

}

bool dfs2(int u){

    for(auto& i:adj[u]){
        if(c1[u] == c1[i] or c2[u] == c2[i]) return false;
    }

    return true;

}


int main(){

    cin >> n >> m;

    for(int i=1;i<=m;i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int p;
    cin>>p;

    for(int i=0;i<p;i++){
        int x;
        cin >> x;
        c1[x] = true;
    }
    
    int s;

    cin >> s;

    for(int i=0;i<s;i++){
        int x;
        cin >> x;
        c2[x] = true;
    }
     
     dfs(1);

     cout << (dfs2(1) ? "Sim\n":"Nao\n");


    return 0;
}
