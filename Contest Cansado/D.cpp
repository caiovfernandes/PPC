#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main(){

    int qtd;
    int aux = 0;
    cin>>qtd;
    string s;
    vector<string> vec_aux;
    vector<string> vec;

    cin>>s;
    vec.push_back(s);
    vec_aux.push_back(s);
    
    for(int i=0; i<qtd-1; i++){
        cin>>s;
        vec.push_back(s);
        for(int j=0;j<vec_aux.size()+1;j++){
            if(vec_aux[i]==s){
                aux++;
            }
        }
        if(aux!=0){
            vec_aux.push_back(s);
        }
        aux=0;
    }
    int mat[vec_aux.size()];

    for(int i=0;i<vec.size();i++){
        for(int j=0; j<vec_aux.size();j++){
            if(vec[i]==vec_aux[j]){
                mat[j]++;
            }
        }
    }

    for(int i=0;i<vec_aux.size();i++){
        cout<<vec_aux[i]<<endl;
    }


    return 0;
}