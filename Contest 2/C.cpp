#include <iostream>

using namespace std;

int main(){
    int qtd;
    int a[3];
    int count =0;
    cin >> qtd;

    for(int i=0;i<qtd;i++){
        cin >>a[0]>>a[1]>>a[2];
        if(a[0]==1 && a[1]==1){
            count++;
            continue;
        }
        else if(a[1]==1 && a[2]==1){
            count++;
            continue;
        }
        else if(a[0]==1 && a[2]==1){
            count++;
            continue;
        }
    }

    cout<<count<<endl;


    return 0;
}