#include <iostream>
#include <math.h>

int main(){
    long long n;
    long long sum = 1;
    std::cin >> n;
    //mod 10^9 + 7
    for (long int i = 0; i < n; i++){
        sum *= 2;
        sum = sum % ((unsigned long long)std::pow(10, 9) + 7);
    }
    std::cout << sum << std::endl;
}
