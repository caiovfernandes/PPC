#include <iostream>

using namespace std;

int main(){
    int n,m;
    int i = 0;
    int j=0;
    cin >> n >> m;
    for(i=n+1; i<100; i++){
        for(j=2; j<i; j++){
            if(i%j == 0){
                break;
            }
        }
    if(i==j or i==1){
        if(j==m){
            cout<< "YES" << endl;
            break;
        }
        else{
            cout << "NO" << endl;
            break;
        }

        }
    }

    return 0;
}
