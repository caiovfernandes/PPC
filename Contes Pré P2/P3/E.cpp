#include <iostream>

using namespace std;

unsigned long long fat(unsigned long long x){
    return x == 0 ? 1 : x*fat(x-1);
}

int main(){

    unsigned long long m;

    cin >> m;
    if(m==2){
        cout<<"0"<<endl;
        return 0;
    }

    cout << (m-3)*(fat(m-2))<<endl;
    
    return 0;
}
