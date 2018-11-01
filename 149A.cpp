#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int k=0, a=0, n=1;
  vector<int> v;
  cin>>k;
  if (k==0)
    cout<<0<<endl;
  else {
    for(int j=0; j<12; j++){
      cin>>a;
      v.push_back(a);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0; i<12; i++){
      if(k-v[i]>0)
	n++;
      k=k-v[i];
    }
    if(n>12)
      cout<<-1;
    else
      cout<<n;
  }
  return 0;
}
      
  
