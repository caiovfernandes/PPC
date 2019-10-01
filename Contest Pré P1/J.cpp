#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string aux;
    cin >> aux;
    char a;

    for(int i=0; i<aux.length();i+=2){
        for(int j=0; j<aux.length(); j+=2){
            if(aux[i] < aux[j]){
                swap(aux[i], aux[j]);
                
            }
        }
    }
    cout << aux<<endl;
    return 0 ;
}