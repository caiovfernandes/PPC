#include <iostream>
#include <cmath>
#include <string>
#include <set>
using namespace std;

int main(){
int a;
cin >> a;

for(int i=a+1; ; i++){
    set<int> aux;
    int j=i;

    while(j!=0){
        aux.insert(j%10);
        j = j/10;
    }
    if(aux.size() == 4){
        cout << i <<endl;
        break;
    }
}

    return 0;
}