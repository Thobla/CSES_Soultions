#include<iostream>

int main(){
    long long n;
    long long curr;
    long long sum = 0;
    std::cin >> n;
    for (int i = 1; i < n; i++){
        std::cin >> curr;
        sum += curr;
    }
    n = (n * (n+1)) / 2;
    std::cout << (n - sum) << std::endl;

}
