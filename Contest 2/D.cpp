#include <iostream>

using namespace std;

int main(){
    int qtd;
    int result =0;
    
    cin >> qtd;

    for(int i=0; i<qtd; i++){
        string operation;
        cin>>operation;
        if(operation[0]== 'X'){
            if(operation[1]== '+')result++;
            else{
                result--;
            }
        }
        else{
            if(operation[1]== '+')result++;
            else{
                result--;
            }
        }
    }

    cout << result << endl;


    
    return 0;
}