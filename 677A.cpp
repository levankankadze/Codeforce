#include <iostream>
/* using namespace std; */

int main(){
  int n=0, h=0, a=0, sum=0;
  std::cin>>n>>h;
  for(int i=0; i<n; i++){
    std::cin>>a;
    if(a>h)
      sum=sum+2;
    else
      sum=sum+1;
  }
  std::cout<<sum;
  return 0;
}
