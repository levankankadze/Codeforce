#include <iostream>
using namespace std;

int main(){
  string s, c;
  int n=0, m=0;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>s;
    if(s!=c){
      m++;
      c=s;
    }
  }
  cout<<m;
  return 0;
}
