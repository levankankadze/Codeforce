#include <iostream>

int main(){
    int n = 0, zeros = 0, ones = 0 ;
    std::string s;
    std::cin >> n >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == 'z')
            zeros++;
        else if(s[i] == 'n')
            ones++;
    }
    for(int i = 0; i < ones; i++)
        std::cout << "1 ";
    for(int i = 0; i < zeros; i++)
        std::cout << "0 ";
    return 0;
}