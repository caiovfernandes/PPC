#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);
    vector<char> s1_vec;
    vector<char> s2_vec;
    vector<char> s3_vec;
    
    for(int i=0;i<s1.length();i++){
        s1_vec.push_back(s1[i]);
    }
    for(int i=0;i<s2.length();i++){
        s2_vec.push_back(s2[i]);
    }
    int aux=0;
    auto it = s1_vec.begin();
    for(int i=0;i<s1_vec.size();i++){
            if(s2_vec[aux]==' ')aux++;
            if(s2_vec[aux]==s1_vec[i]){
                s3_vec.push_back(s2_vec[i]);
                aux++;
                s1_vec.erase(it+i); 
                i=0;
            }
            if(aux==s2_vec.size() - 1){
                cout<<"YES"<<endl;
                return 0;
            }
    }
    cout<<"NO"<<endl;
    return 0;
}
