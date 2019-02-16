#include <iostream>
using namespace std;

int main(){
    long long x=0, y=0, z=0, a=0, b=0, c=0;
    cin>>x>>y>>z>>a>>b>>c;
    if(x>a)
        cout<<"NO";
    else
        if((a+b-x>=y) && (a+b+c-x-y>=z))
            cout<<"YES";
        else
            cout<<"NO";
    return 0;
}