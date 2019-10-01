#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main(){
	int s,n;
	cin>>s>>n;
	bool can = true;
	vector<pair<int,int> > xy;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		xy.push_back(make_pair(x,y));
		}
	sort(xy.begin(), xy.end());
	for(int i=0;i<n;i++){
		if(s>xy[i].first)s+=xy[i].second;	
		else{
			can=false;
			break;
		}
	}
	if(can)cout<<"YES"<<endl;
	else{
		 cout<<"NO"<<endl;
	}
	return 0;
}
