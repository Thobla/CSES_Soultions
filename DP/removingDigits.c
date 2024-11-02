#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, k, curr;
    scanf("%d", &n);
    int dp[n+1];
    dp[0] = 0;
    for (int j = 1; j <= n; j++){
        dp[j] = INT_MAX-1;
        curr = dp[j];
        i = j;
        while (i > 0){
            //printf("i: %d, imod10: %d \n", i, (i%10));
            if (j-(i%10) >= 0){
                if (dp[j-(i%10)] + 1 < curr){
                    curr = dp[j-(i%10)] + 1;
                }
            }
            i /= 10;
        }
        dp[j] = curr;
        //printf("n: %d, dp: %d \n", j, dp[j]);
    }
    printf("%d", dp[n]);
    
}
