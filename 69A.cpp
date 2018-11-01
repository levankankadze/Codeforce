#include <iostream>
using namespace std;

int main(){
  int n, x=0, y=0, z=0;
  cin>>n;
  for(int i=0; i<n; i++){
    int x1, x2, x3;
    cin>>x1>>x2>>x3;
    x+=x1; y+=x2; z+=x3;
}
if(x==0 && y==0 && z==0)
  cout<<"YES"<<endl;
 else
   cout<<"NO"<<endl;
return 0;
}
