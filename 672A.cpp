#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    for(int i=0; i<400; i++){
        s+=to_string(i);
    }
    cout<<s[n];
    return 0;
}