#include <iostream>
#include <vector>

#define ll long long
#define vl vector<ll>
using namespace std;

int main(){

    ll n, m;
    cin >> n >> m;
    vl vet(m);
    for(auto&p:vet){
        cin >> p;
    }
    ll aux1 = 0, aux2 = 0;
    for(auto&p:vet){
        aux2 -= p;
        aux1 = max(aux1, aux2);
    }
    if(aux1 <= n){
        cout << aux1 << "\n";
    } else{
        cout << "-1\n";
    }
    return 0;
}