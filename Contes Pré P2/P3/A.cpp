#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<string> stk;
    int qtd;
    cin>>qtd;
    for(int i=0;i<qtd;i++){
        char aux;
        cin>>aux;
        if(aux=='+'){
            string a;
            getline(cin, a);
            string s;
            for(int j=1;j<a.size();j++){
                s.push_back(a[j]);
            }
            stk.push(s);
        }
        else {
            if(stk.size()>=1){
                string s = stk.top();
                stk.pop();
                cout<<s<<endl;
            }
            else{
                cout<<"Backlog vazio"<<endl;
            }
        }

    }

    return 0;
}
