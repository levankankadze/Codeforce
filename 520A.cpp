#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;
    string r = "abcdefghijklmnopqrstuvwxyz";
        string s;
        cin >> s;

        if(n < 26){
            cout << "NO";
        }else{


                transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0; i <26;++i){
           if (s.find(r[i])  != string::npos){
                c++;

            }else{
                cout << "no";
                break;
            }

        }

        if(c == 26){
            cout <<"yes";
        }

        }
    return 0;
}