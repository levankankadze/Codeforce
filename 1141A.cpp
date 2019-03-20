#include<iostream>

int main(){
    int n, m, k, out=0;
    std::cin>>n>>m;
    if(m%n!=0)
        std::cout<<-1;
    else{
            k=m/n;
        while(k%3==0){
            out=out+1;
            k=k/3;
            }
        while(k%2==0){
            out=out+1;
            k=k/2;
            }
        if(k!=1)
            std::cout<<-1;
        else
            std::cout<<out;
    }
    return 0;
}