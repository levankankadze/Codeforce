#include <iostream>

int main()
{
	int a = 0, b = 0, n = 0, m = 0, k = 0;
	std::cin >> n >> m;
	for(int a = 0; a <= 1000; a++){
		for(int b = 0; b <=1000; b++){
			if(a*a + b == n && a + b*b == m)
				k++;
		}
	}
	std::cout << k; 
	return 0;
}