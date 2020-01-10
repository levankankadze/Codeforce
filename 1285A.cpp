#include <iostream>

using namespace std;

int main(){
    int n, l = 0, r = 0;
    char c;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c;
        if (c == 'L')
            l++;
        else
            r++;
    }
    cout << l + r + 1;
    return 0;
}