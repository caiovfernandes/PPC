#include <iostream>
#include <iomanip> 

using namespace std;

int main(){

    int n;
    cin >> n;
    int aux=0;
    double final=0;
    for(int i=0; i<n; i++){
        cin >> aux;
        final+=aux;
    }

    printf("%0.12lf\n",(final/n));



    return 0;
}