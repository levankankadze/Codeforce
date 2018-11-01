#include <iostream>
using namespace std;

int main(){
  long long t=0, s=0, a=0, b=0, c=0, n=0;
  cin>>t;
  for(int j=0; j<t; j++){
    cin>>s>>a>>b>>c;
    if(s>=a*c)
      n=(s/c/a*b+s/c)*1LL;
    else
      n=s/c*1LL;
    cout<<n<<endl;
  }
  return 0;
}
