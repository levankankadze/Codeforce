#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n=0, p=0;
	long double sum=0, v=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>p;
		sum=sum+p;
	}
	
	sum=sum;
	cout<<setprecision(14)<<sum/n;
	return 0;
}