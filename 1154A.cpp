#include <iostream>

using namespace std;
int main(){
    int a, b, c, d, max=0;
    cin>>a>>b>>c>>d;
    if(a>=max)
        max=a;
    if(b>=max)
        max=b;
    if(c>=max)
        max=c;
    if(d>=max)
        max=d;
    if(max-a!=0)
        cout<<max-a<<" ";
    if(max-b!=0)
        cout<<max-b<<" ";
    if(max-c!=0)
        cout<<max-c<<" ";
    if(max-d!=0)
        cout<<max-d;
    return 0;
}