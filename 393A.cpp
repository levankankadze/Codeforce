#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  string s;
  int n=0, i=0, t=0, e=0;
  cin>>s;
  for(int j=0; j<s.size(); j++){
    if(s[j]=='n')
      n++;
    else if(s[j]=='i')
      i++;
    else if(s[j]=='t')
      t++;
    else if(s[j]=='e')
      e++;
  }
  e=e/3;
  n=(n-1)/2;
  vector<int> v={n, i, t, e};
  sort(v.begin(), v.end());
  cout<<v[0]<<endl;
  return 0;
}
