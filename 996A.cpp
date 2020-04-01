#include <iostream>

int main(){
    int n = 0, N = 0;
    std::cin >> n;

    if(n >= 100){
        N += n / 100;
        n = n % 100;
    }

    if(n >= 20){
        N += n / 20;
        n = n % 20;
    }

    if(n >= 10){
        N += n / 10;
        n = n % 10;
    }
        
    if(n >= 5){
        N += n / 5;
        n = n % 5;
    }

    N += n;

    std::cout << N;
    return 0;
}
