#include <iostream>
#include <set>

using namespace std;

int main(){
    set<char> c;
    string aux1;
    cin >> aux1;
    int count = 0;

    for(int i=0; i<aux1.length(); i++){
        c.insert(aux1[i]);
    }
    if(c.size() %2 ==0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}