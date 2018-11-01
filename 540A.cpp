#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  int n, s=0;
  string a,b;
  cin>>n>>a>>b;
  for (int i=0; i<n; i++){
    if((abs(a[i]-b[i]))<=(10-abs(a[i]-b[i])))
	    s=s+abs(a[i]-b[i]);
	   else
	    s=s+10-abs(a[i]-b[i]);
	}
  cout<<s;
  return 0;
}
