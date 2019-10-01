#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,M;
    cin>>N>>M;
    vector<pair<long long int,pair<long long int,long long int> > > vec;
    long long int v= 1000000000;
    for(int i=0;i<N;i++){
        int a,b;
        cin>>a>>b;
        b-=v;
        vec.push_back(make_pair(a,make_pair(abs(b),abs((i+1)-v))));
    }

    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());

    // for(auto& i:vec){
    //     cout << i.first << " " << i.second.first << " " << (i.second.second + v) << endl;
    // }

    for(int i = 0;i<M;i++){
        cout<<abs(vec[i].second.second - v)<< (i+1 == M ? "\n": " " );
    }

    return 0;
}
