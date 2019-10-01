#include <iostream>
#include <vector>
#include <iomanip>
#include <map>
#include <string>

using namespace std;

class tep{

    public:

    int a,b,c;

    bool operator<(const tep &t){

        if(t.a != a) return a < t.a;
        else if (t.b != b) return t.b < b;
        return t.c < c; 
    }
};

int main(){

    tep t;

    int n,m;

    cin >> n >> m;

    vector<tep> v(n+1);

    for(int i=1;i<=n;i++){
            int aux1,aux2;
            cin >> aux1 >> aux2;
            v[i].a = aux1;
            v[i].b = aux2;
            v[i].c = i;
    }

    sort(v.begin(),v.end());

    for(int i=0;i<m;i++){
        cout << v[i].c << (i+1 == m ? ")
    }
    
    return 0;
}
