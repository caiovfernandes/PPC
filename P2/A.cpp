#include <iostream>
#include <vector>
#include <bits/stdc++.h>

#define ll long long
#define vl vector<ll>
using namespace std;

int main(){

    ll n, m;
    bool a;
    string s, t, u;
    getline(cin, u);
    n = stoll(u);
    getline(cin, s);
    getline(cin, u);
    m = stoll(u);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i = 1; i <= m; ++i){
        getline(cin, t);
        transform(t.begin(), t.end(), t.begin(), ::tolower);
        sort(t.begin(), t.end());
        a = false;
        for(auto&p:s){
            if(binary_search(t.begin(), t.end(), p)){
                a = true;
            }
        }
        if(a){
            cout << "Mensagem #" << i << ": Carlos\n";
        } else{
            cout << "Mensagem #" << i << ": Beto ou Carlos\n";
        }
    }
    return 0;
}