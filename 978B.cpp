#include<iostream>

using namespace std;

int main () {
    long long n,a=0;
    cin>>n;
    string s;
    cin>>s;
    for(long long i=0;i<n-2;i++){
        if(s[i] =='x' && s[i+1] =='x' && s[i+2]== 'x'){
            a++;
        }
    }
    cout<<a;
    return 0;
}