#include <iostream>

using namespace std;

int main(){
    int t = 0, h = 0, m = 0;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> h >> m;
        cout << 23 * 60 - h * 60 + 60 - m << endl;
    }
    return 0;
}