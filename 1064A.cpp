#include <iostream>

using namespace std;

int main(){
	int a, b, c, max, sum;
	cin>>a>>b>>c;
	max=a;
	if(b>max)
		max=b;
	if(c>max)
		max=c;
	sum=a+b+c;
	if(max<sum-max)
		cout<<0<<endl;
	else
		cout<<2*max-sum+1<<endl;
	return 0;
}