#include <iostream>
#include <set>

using namespace std;

int main(){

set<int> shoes;
    for(int i=0;i<4;i++){
    int aux;
    cin >> aux;
    shoes.insert(aux);
    }
cout <<  (4 - shoes.size())  << endl;
    return 0;

}