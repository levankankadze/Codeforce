#include <iostream>
/* using namespace std; */

int main(){
  int n=0, sum=0, s=0, l=0, m=0;
  std::cin>>n;
  for (int i=0; i<n; i++){
    std::cin>>s;
    sum=sum+s;
    if (s>m)
      m=s;
  }
  l=(2*sum)/n+1;
  if (l>m)
    std::cout<<l;
  else
    std::cout<<m;
return 0;
}
