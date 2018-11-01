#include <iostream>
#include <string>
using namespace std;
int main(){
    int i,k=0;
    string s;
    cin >> i;
    while (k<i)
    {
        cin >> s;
        if (s.length()>10)
            cout << s[0]<<s.length() - 2<<s[s.length() - 1]<<endl;
        else
            cout << s<<endl;
        k++;
            
    }
    return 0;
}
