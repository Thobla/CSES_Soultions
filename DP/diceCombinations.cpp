#include <cmath>
#include <iostream>
#include <vector>


int main(){
    int n;
    std::cin >> n;
    std::vector<long long> DP(n+1, 0);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j < 7; j++){
            DP[i] = (i - j > 0) ? (DP[i] + DP[i-j]) % (long long) (std::pow(10ll, 9) + 7): DP[i];
            DP[i] = (i - j == 0) ? (DP[i] + 1) % (long long) (std::pow(10ll, 9) + 7) : DP[i];
        }
    }
    std::cout << DP[n] << std::endl;
}
