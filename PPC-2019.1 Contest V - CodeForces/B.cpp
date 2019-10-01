#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	vector<int> vec;
	vector<int> aux_vec;
	int aux=0;
	int x=0;
	int y = 10000000;
	for(int i=0;i<m;i++){
		cin>>aux;
		vec.push_back(aux);
		x+=aux;
	}
	sort(vec.begin(),vec.end());
	for(int i=0;i<=m-n;i++){
		y = min(y,(vec[i+n-1]-vec[i]));
	}
	cout<<y<<endl;
    return 0;
}
