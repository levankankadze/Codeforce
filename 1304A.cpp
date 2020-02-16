#include <iostream>

int main()
{
	int t = 0; //number of test
	int x = 0; //position of the big rabbit
	int y = 0; //postion of the small rabbit
	int a = 0; //jump length of the first
	int b = 0; //jump lenth  of the second
	std::cin >> t;
	for(int i = 0; i < t; i++){
		std::cin >> x >> y >> a >> b;
		if((y - x)%(a + b) == 0)
		   std::cout << (y - x)/(a + b) << std::endl;
	    else
    	   std::cout << -1 << std::endl;
	}
	return 0;
}