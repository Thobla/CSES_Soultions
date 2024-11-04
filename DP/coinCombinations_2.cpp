#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

int main(){
    int n, x, ci, count, counter;
    std::cin >> n >> x;
    int coins[n];
    for(int i = 0; i < n; i++){
        std::cin >> coins[i];
    }
    long long dp[x+1][n+1];
    long long dp_count[x+1][n+1];
    for(int j = 0; j < n+1; j++){
        for(int i = 1; i < x+1; i++){
            dp[i][j] = 0;
            dp_count[i][j] = 0;
        }
        dp[0][j] = 1;
        dp_count[0][j] = 1;
    }
    for(int i = 0; i < x+1; i++){
        for(int j = 0; j < n + 1; j ++){
            //printf("i: %d, j: %d, value: %d\n",i, j, dp[i][j]);
        }

    }

    for(int i = 1; i < x+1; i++){
        for(int j = 0; j < n; j++){
            if(j > 0){
                 dp_count[i][j] = dp_count[i][j] + dp_count[i][j-1] % (long long)(std::pow(10, 9) + 7);
            }
            if(i - coins[j] >= 0){
                dp[i][j] = dp_count[i - coins[j]][j] % (long long)(std::pow(10, 9) + 7);
                dp_count[i][j] = dp_count[i][j] + dp_count[i - coins[j]][j] % (long long)(std::pow(10, 9) + 7);
            }
        }
    }
    for(int i = 0; i < x+1; i++){
        for(int j = 0; j < n; j++){

    //printf("i: %d, j: %d, value: %d\n",i, j, dp_count[i][j]);
        }
    }
    std::cout << dp_count[x][n-1];
}
