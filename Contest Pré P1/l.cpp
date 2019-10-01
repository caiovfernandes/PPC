#include <iostream>

using namespace std;

int main(){

    int count;
    cin >> count;
    for(int i=0; i<count; i++){
        string aux;
        cin >> aux;
        for(int j=0; j<aux.length(); j++){
            if(aux.length()>10){
                cout << aux[0] << (aux.length() - 2)<< aux[aux.length() - 1] << endl;
                break;
            }
            else{
                cout << aux<<endl;
                break;
            }
        }
    }
}