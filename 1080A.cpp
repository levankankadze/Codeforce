#include <iostream>

using namespace std;

int main(){
	int n=0, k=0, num=0;
	cin>>n>>k;
	if(2*n%k==0)
		num=num+2*n/k;
	else
		num=num+2*n/k+1;
	if(5*n%k==0)
		num=num+5*n/k;
	else
		num=num+5*n/k+1;
	if(8*n%k==0)
		num=num+8*n/k;
	else
		num=num+8*n/k+1;
	cout<<num;
	return 0;
}
