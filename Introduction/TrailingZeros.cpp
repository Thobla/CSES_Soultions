#include <iostream>

int main(){
    long long n;
    long long sum = 0;
    std::cin >> n;
    for (int i = 5; i <= n; i = i*5){
        sum += n/i;
    }
    std::cout << sum << std::endl;
}
