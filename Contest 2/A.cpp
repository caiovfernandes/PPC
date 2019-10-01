#include <iostream>

using namespace std;

int main(){
    string a;
    cin >> a;

    for(int i=0;i<a.length(); i++){
        if(a[i]=='H' or a[i]=='Q' or a[i]=='9'){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;

}