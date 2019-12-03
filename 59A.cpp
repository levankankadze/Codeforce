#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int u=0, l=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(isupper(s[i]))
            u++;
        else
            l++;
    }
    if(u>l)
        transform(s.begin(), s.end(),s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(),s.begin(), ::tolower);
    cout<<s<<"\n";
    return 0;
}