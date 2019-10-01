#include <iostream>

using namespace std;

int main(){
    string a,b;
    int count = 0;
    cin >> a >> b;

    for(int i = 0; i<a.length(); i++){
        if(a[i]<96)a[i]+=32;
        if(b[i]<96)b[i]+=32;
    }

    if(a==b)cout<< 0 <<endl;
    else if(a>b)cout<< 1 <<endl;
    else {
        cout<< -1 <<endl;
    }

    return 0;

}