#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    long double M;
    int t;
    cin >> M >> t;
    vector<long double> vet(t), vet2(t+1, 1);
    long double soma = 0;
    for(auto&p : vet){
        cin >> p;
    }
    for(int i = t-1, j = 1; i >= 0; --i, ++j){
        long double a;
        long long f;
        
        // a = vet2[j-1]*vet[i];
        // b = a * 100;
        // f = (b);
        // a = a - (b - f)/100;
        
        // a += vet2[j-1]*100;
        
        // b = a * 100;
        // f = (b);
        // a = a - (b - f)/100;

        // a /= 100;


        // b = a * 100;
        // f = (b);
        // a = a - (b - f)/100;

        // vet2[j] = a;
        vet2[j] = (vet2[j-1] + (vet2[j-1]*vet[i])/100);
        // cerr << vet2[j] << " | ";
        // a = vet2[j] * 100;
        // f = a;
        // vet2[j] = vet2[j] - (long double)(a - floor(a))/100.00;
        // cerr << vet2[j] << "\n";
    }
    for(int i = 0; i <= t; ++i){
        soma += vet2[i];
    }

    long double res = M/soma;
    cerr << res << " | ";
        long double a = res * 100;
        long long f = a;
        res = res - (long double)(a - floor(a))/100.00;
        cerr << res << "\n";    
    res = ceil(res*100)/100;
    string s = to_string(res);
    int  ponto;

    if(res >= 1e5){
        cout << "impossivel\n";
    } else{
        for(int i = 0;i < s.size(); ++i){
            if(s[i] == '.'){
                ponto = i;
            }
        }
        string r = s.substr(0, ponto);
        cout << "R$ ";
        if(r.size()%3 != 0){
            cout << r.substr(0, r.size()%3) << ".";
        }
        for(int i = r.size()%3; i < r.size(); i += 3){
            cout << r.substr(i, 3);
        }
        
        cout << "," << s.substr(ponto+1, 2) << "\n";
    }
    return 0;
}