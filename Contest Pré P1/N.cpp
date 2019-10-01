#include <iostream>
#include <vector>
using namespace std;

int main(){

vector<char> vect;
string s1,s2,s3;
cin >> s1 >> s2 >> s3;

for(int i=0; i<s1.length();i++){
    vect.push_back(s1[i]);
}

for(int i=0; i<s2.length();i++){
    vect.push_back(s2[i]);
}


for(int i=0; i<s3.length();i++){
    for(int j=0; j<vect.size(); j++){
        if(vect[j] == s3[i]){
            vect[j] = '0';
            break;
        }
    }
}
int aux=0;

for(int i=0; i<vect.size(); i++){
    if(vect[i]!='0')aux++;
}

if(vect.size() != s3.length()){
    cout << "NO"<< endl;
}

else if(aux==0){
    cout << "YES"<< endl;
}
else{
    cout << "NO"<< endl;
}

    return 0;
}

