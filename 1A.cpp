#include <iostream>
using namespace std;
int main(){
	long long n, m, a, N = 0, M = 0;
	cin >> n >> m >> a;
	if (n % a == 0)
		N = n / a;
	else
		N = n / a + 1;
	if (m % a == 0)
		M = m / a;
	else
		M = m / a + 1;
	cout << N*M;
}
