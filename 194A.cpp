#include <iostream>

int main(){
   int n = 0, k = 0;
   std::cin >> n >> k;
   if(k >= 3*n)
        std::cout << 0;
    else
        std::cout << 3*n - k;
    
   return 0;
}