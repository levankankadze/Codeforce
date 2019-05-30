#include<iostream>
using namespace std;

int main(){
    int max, a, b, c;
    cin>>a>>b>>c;
    b=b/2;
    c=c/4;
    max=a;
    if(b<max){
        max=b;
    }
    if(c<max){
        max=c;
    }
    cout<<max*7<<endl;
    return 0;
}