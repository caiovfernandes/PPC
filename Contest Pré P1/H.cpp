#include <iostream>

using namespace std;

int main(){

    int qtd;
    cin >> qtd;
    int a[qtd];
    
    int base[2];

    for(int i=0; i<qtd; i++){
        cin >> a[i];
    }
    base[1] = a[0];
    base[0] =a[0];
    int count =0;

    for(int i=1;i<qtd;i++){
        if(a[i] > base[1]){
            base[1] = a[i];
            count++;
            
        }
        else if(a[i]< base[0]){
            base[0] = a[i];
            count++;
        }
    }
    cout<<count << endl;

}