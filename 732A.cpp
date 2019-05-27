#include<iostream>

int main(){
    int k, r, temp, ans=1;
    std::cin>>k>>r;
    temp=k;
    while(temp%10!=r){
        if(temp%10==0) break;
        temp+=k;
        ans++;
    }
    std::cout<<ans<<std::endl;
    return 0;
}