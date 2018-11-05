#include <iostream>
#include <string>

using namespace std;

int main(){
	int n, m=0;
	string s;
	cin>>n>>s;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='8')
			m++;
	}
	if(n/11>m)
		cout<<m<<endl;
	else 
		cout<<n/11<<endl;
	return 0;
}