#include <iostream>
#include <set>
#include <map>

using namespace std;

int main(){
    set<int> st;
    map<int, int>  mp;
    string s;
    cin>>s;
    mp[s[0]]++;
    mp[s[1]]++;
    mp[s[3]]++;
    mp[s[4]]++;
    mp[s[6]]++;
    mp[s[7]]++;
    int res = 720;
    for(auto t: mp){
        for(int i=2; i<=t.second; i++){
            res/=i;
        }
    }
    

    cout<<res<<endl;
    

    


    return 0;
}