#include <iostream>
#include <string.h>
using namespace std;

int main(){
  string s;
  int face=0;
  long long n=0;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>s;
    if(s=="Tetrahedron")
      face+=4;
    else if(s=="Cube")
      face+=6;
    else if(s=="Octahedron")
      face+=8;
    else if(s=="Dodecahedron")
      face+=12;
    else
      face+=20;
  }
  cout<<face;
  return 0;
}
