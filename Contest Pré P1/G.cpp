#include <iostream>

using namespace std;

int main(){

    int qtd;
    int count =0;
    cin >>qtd;
    int a[qtd],b[qtd];
    int a_one=0;
    int a_zero=0;
    int b_one=0;
    int b_zero=0;
    int a_f = 0;
    int b_f= 0;
    
    for(int i=0;i<qtd;i++){
        cin>>a[i]>>b[i];
        if(a[i]==0)a_zero++;
        if(a[i]==1)a_one++;
        if(b[i]==0)b_zero++;
        if(b[i]==1)b_one++;
    }
    
    if(a_zero>a_one){
        for(int i=0;i<qtd;i++){
            if(a[i]==1)count++;
        }
    }
    if(a_one>a_zero){
        for(int i=0;i<qtd;i++){
            if(a[i]==0)count++;
        }
    }
    if(a_one==a_zero){
        for(int i=0;i<qtd;i++){
            if(a[i]==1)count++;
        }
    }



    if(b_zero>b_one){
        for(int i=0;i<qtd;i++){
            if(b[i]==1)count++;
        }
    }
    if(b_one>b_zero){
         for(int i=0;i<qtd;i++){
            if(b[i]==0)count++;
        }
    }
    if(b_one==b_zero){
        for(int i=0;i<qtd;i++){
            if(b[i]==1)count++;
        }
    }
    cout << count<<endl;

    return 0;

}