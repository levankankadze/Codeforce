#include<iostream>
using namespace std;

int main(){
    int t=0, a=0, b=0, c=0;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>a>>b>>c;
        if(a+b+c==180 && a>0 && b>0 && c>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

