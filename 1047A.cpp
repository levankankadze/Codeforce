#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	if((n-2)%3==0)
		cout<<n-3<<" "<<2<<" "<<1<<endl;
	else
		cout<<n-2<<" "<<1<<" "<<1<<endl;
	return 0;
}