#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double a, b, c, s;
    cin >> a >> b >> c;
    s = sqrt(a * b * c);
    cout << 4 * (s/a + s/b + s/c);
}