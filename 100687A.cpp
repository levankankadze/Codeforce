#include <iostream>
using namespace std;
int main(){
  string s;
  int e=0;
  cin>>s;
  for(int i=0; i<8; i++){
    if(s[i]=='?')
    e=e+1;
  }
  if(e==0)
  cout<<"Yes";
  else
  cout<<"No";
  return 0;
}
