#include<iostream>

using namespace std;

int main(){
    int n, m, c, mishka=0, chris=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>m>>c;
        if(m>c)
            mishka++;
        if(c>m)
            chris++;
    }
    if(mishka>chris){
        cout<<"Mishka";
    }
    if(chris>mishka){
        cout<<"Chris";
    }
    if(mishka==chris){
        cout<<"Friendship is magic!^^";
    }
    return 0;
}