#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int qtd;
    cin >> qtd;
    int soma_x=0;
    int soma_y=0;
    int soma_z=0;

    for(int i=0; i<qtd; i++){
        int x,y,z;
        cin >> x >> y >> z;
        
        soma_x +=x;
        soma_y += y;
        soma_z += z;
    }

    if(soma_x ==0 && soma_y==0 && soma_z ==0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}