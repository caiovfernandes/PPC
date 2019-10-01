#include <iostream>
#include <vector>
#include <iomanip>
#include <map>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int N, M;
    vector<int> salarios;
    vector<int> result;
    cin>>N;
    for(int i=0; i<N; i++){
        int aux;
        cin>>aux;
        salarios.push_back(aux);
    }
    sort(salarios.begin(),salarios.end());  
    cin>>M;
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        auto lb = lower_bound(salarios.begin(),salarios.end(),a);
        auto ub = upper_bound(salarios.begin(),salarios.end(),b);

        int me = lb - salarios.begin();
        int ma = ub-salarios.begin();

        if(me == ma) cout << "0"<<endl;
        else cout << (ma) - me << endl;
        
    }

    return 0;
}
