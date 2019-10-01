#include <iostream>

using namespace std;

int main(){
    string s;
    int qtd  =0;
    int count_x = 0;
    int aux = 0;
    cin>>qtd>>s;
    for(int i=0; i<s.length();i++){
        if(s[i]=='x')count_x++;
        else{
            count_x=0;
        }
        if(count_x==3){
            aux++;
            count_x--;
        }
    }
    if(aux==0)cout<<"0"<<endl;
    else{
        cout<<aux<<endl;
    }

  return 0;
}
