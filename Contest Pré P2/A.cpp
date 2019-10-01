#include <iostream>

using namespace std;

int main(){
  string s;
  cin>>s;
  int count_a = 0;
  int count_s = 0;
  int result = s.length();

  for(int i=0; i<s.length(); i++){
    if(s[i]=='a')count_a++;
    else {
      count_s++;
    }
  }
  if(count_s >= count_a){
    while(count_s >= count_a){
      count_s--;
      result--;
    }
  }

  cout << result << endl;

  return 0;
}
