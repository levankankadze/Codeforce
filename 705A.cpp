#include <iostream>
using namespace std;

int main(){
  int n=0;
  cin>>n;
  if(n==1)
    cout<<"I hate it";
  else
    for(int i=1; i<=n; i++){
      if(i%2==1)
	cout<<"I hate";
      else
	cout<<"I love";
      if (i<n)
	cout<<" that ";
      if (i==n)
	cout<<" it";
    }
  return 0;
}


