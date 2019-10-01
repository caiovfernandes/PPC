#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){

string aux;
getline(cin, aux);

if(aux[0] > 91){
    aux[0] = 32;
}

cout<<aux<<endl;
    return 0;
}