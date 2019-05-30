#include<iostream>

using namespace std;

int main(){
    int n, temp, sum=0, max=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        sum+=temp;
        if(temp>max)
        max=temp;
    }
    cout<<n*max-sum;
    return 0;
}