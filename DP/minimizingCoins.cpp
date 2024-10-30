#include <iostream>

int main(){
    int n, x;
    std::cin >> n >> x;
    int coins[n];
    int dp[x+1];
    for (int i = 0; i < n; i++){
        std::cin >> coins[i];
    }
    int sum;
    dp[0] = 0;
    for (int i = 1; i < x+1; i++){
        sum = -1;
        for (int coin : coins){
            if (i >= coin){
                if (dp[i-coin] != -1){
                    if (sum == -1){
                        sum = dp[i-coin] + 1;
                    }
                    else if(dp[i-coin] + 1 < sum){
                        sum = dp[i-coin] + 1;
                    }
                }
            }
        }
        dp[i] = sum;
    }
    std::cout << dp[x] << std::endl;
}


