#include <iostream>
using namespace std;

int main(){
  int t,n;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>t;
    if(360%(180-t)==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
  }
  return 0;
}
