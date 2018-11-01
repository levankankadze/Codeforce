#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(){
  int n, temp1=0, temp0=0;
  string s;
  cin>>n>>s;
  for(int i=0; i<n; i++){
    if(s[i]=='0')
    temp0++;
    else
    temp1++;
  }
  cout<<abs(temp1-temp0)<<endl;
  return 0;
}
