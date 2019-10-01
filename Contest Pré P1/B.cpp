#include <iostream>
#include <vector>

using namespace std;

int main(){
    string a1,a2;
    cin >> a1;
    cin >> a2;
    for(int i = 0 ; i<a1.length(); i++){
        if(a1[i]==a2[i]){
            cout << '0';
        }
        else{
        cout << '1';
        }
    }
    cout << endl;



    return 0;
}