#include <iostream>
#include <string>
#include <vector>

int main(){
    int n, n1 = 0, n2 = 0;
    std::string temp, s1, s2;
    std::vector<std::string> vec;
    std::cin >> n;
    for(int j = 0; j < n; j++){
        std::cin >> temp;
        vec.push_back(temp);
    }
    s1 = vec[0];
    for(auto i : vec){
        if(i == s1){
            n1++;
        }
        else{
            n2++;
            s2 = i;
        }
    }
    if(n1 > n2)
        std::cout << s1;
    else
        std::cout << s2;
    return 0;
}