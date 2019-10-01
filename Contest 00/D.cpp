#include <iostream>
#include <cmath>
#include <string>
#include <map>

using namespace std;



int main(){

string a;
cin >> a;

for(int i=0; i<a.length(); ){
    if(a[i] == '.'){
        cout<<'0';
        i++;
    }
    else{
        if(a[i+1] == '.'){
           cout << '1';
           i+=2; 
        }
        else{
            cout << '2';
            i+=2;
        }

    }
}

    return 0;
}