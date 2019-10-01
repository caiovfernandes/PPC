#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main(){
    string s, s_aux;
    s_aux = "hello";
    cin>>s;
    vector<char> vec;
    vector<char> vec_aux;
    vector<char> result;
    for(int i=0;i<s.length();i++){
        vec.push_back(s[i]);
    }
    for(int i=0;i<s_aux.length();i++){
        vec_aux.push_back(s_aux[i]);
    }
    int aux_iterator=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==vec_aux[aux_iterator]){
            result.push_back(vec[i]);
            aux_iterator++;
        }
    }
    if(vec_aux==result)cout<<"YES"<<endl; else cout<<"NO"<<endl;
    return 0;
}
