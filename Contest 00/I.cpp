#include <iostream>
#include <cmath>
#include <string>
#include <map>


using namespace std;

int main(){
    string aux;
    cin >> aux;
    map<char, int> map;

    for(int i=0; i<aux.length(); i++){
        map[aux[i]]++;
    }

    int soma = map['7'] + map['4'];

    if(soma == 7 or soma == 4){
        cout << "YES" << endl;

    }
    else{
        cout<< "NO" << endl;
    }


    return 0;
}