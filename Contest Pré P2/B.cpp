#include <iostream>

using namespace std;

int main(){
    int cont;
    string s;
    cin>>cont>>s;
    int A = 0;
    int B = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i]== 'A')A++;
        else{
            B++;
        }
    }
    if(A>B)cout<<"Anton"<< endl;
    else if(B>A)cout<<"Danik"<<endl; 
    else{
        cout << "Friendship"<<endl;
    }

  return 0;
}
