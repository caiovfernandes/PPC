#include <iostream>

using namespace std;

int main(){
    int i;
    int qtd;
    int aux[7];
    cin >> qtd;
    for(int i=0;i<7;i++){
        cin>>aux[i];
    }
        for(i=0; i<7;i++){
          if((qtd - aux[i]) > 0 )qtd-=aux[i];
          else{
              break;
          }
          if(i==6 && qtd>0){
              i=-1;
          }
        }
    
 
    
    cout << (i +1)<<endl;
    return 0;
}