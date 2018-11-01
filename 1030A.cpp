#include <iostream>
using namespace std;

int main(){
  int n=0, m=0, sum=0;
  cin>>n;
  for(int j=0; j<n; j++){
    cin>>m;
    sum=sum+m;
  }
  if(sum==0)
    cout<<"EASY";
  else
    cout<<"HARD";
  return 0;
}
