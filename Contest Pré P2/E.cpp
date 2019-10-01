#include <iostream>
#include <vector>

using namespace std;

int main(){
    string s;
    vector <string> vec;
    int qtd;
    int count =0;
    cin>>qtd;
    for(int i=0;i<qtd;i++){
        cin>>s;
        vec.push_back(s);
    }
    int aux=1;
    for(int i=0;i<qtd;i++){
        for(int j=aux; j<qtd;j++){
            if(vec[i]==vec[j])vec[j] ="YES";
        }
        aux++;
    }

    for(int i=0;i<qtd;i++){
        if(vec[i]=="YES")cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}
