#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main(){


int test,t=0;
char a[test];
cin>>test;

    for(int i=0;i<strlen(a);i++){
        if(a[i]==a[i+1]){
            t++;
        }
    }
    cout<<t<<endl;

    return 0;
}