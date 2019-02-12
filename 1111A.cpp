#include<iostream>
using namespace std;

bool isvowel(char x){
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
        return true;
        return false;
}

int main(){
    int n=0;
    string s,t;
    cin>>s>>t;
    if(s.size()!=t.size())
        cout<<"No";
    else
    {
        for(int k=0; k<s.size(); k++){
            if((isvowel(s[k])==true && isvowel(t[k])==true) || (isvowel(s[k])==false && isvowel(t[k])==false))
                n++;
            else{
                break;
                n=0;
            }
        }
        if(n==s.size())
            cout<<"Yes";
        else
            cout<<"No";
    }
    return 0;
}