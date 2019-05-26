#include<iostream>
#include<string>

int main(){
    int t, n, k, p;
    std::string s;
    std::cin>>t;
    for(int i=0; i<t; i++){
        std::cin>>n>>s;
        p=n;
        for(int l=0; l<=n; l++){
            if(s[l]=='8'){
              p=l;
              break;      
            }
        }
        if(n-p>=11)
            std::cout<<"Yes\n";
        else
            std::cout<<"No\n";
    }
    return 0;
}