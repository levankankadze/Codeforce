#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  int temp=0;
  cin>>s;
  for (int i=0; i<s.length(); i++){
    if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
    temp++;
  }
  if(temp>0)
  cout<<"YES";
  else
  cout<<"NO";
  return 0;
}
