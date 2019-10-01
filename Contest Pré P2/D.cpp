#include <iostream>

using namespace std;

int main(){
    int qtd;
    string s;
    int count = 0;
    int aux=0;
    int i=0;
    cin>>qtd>>s;
    for(int i=0;i<s.length();i++){
            if(((s[i] - 48) %2) == 0)count+=(i + 1);
        aux++;
    }
   cout<<count<<endl;

    return 0;
}