#include <iostream>

int main(){
    long int n;
    long long sum;
    long int outlier;
    int num_equal = 0;
    long long half_sum;
    int i;
    int print_num_equal;
    std::cin >> n;
    outlier = n;
    sum = n * (n+1) / 2;
    if((sum%2) == 1){
        std::cout << "NO" << std::endl;
    }
    else{
        half_sum = sum/2;
        std::cout << "YES" << std::endl;
        i = n;
        while (half_sum > 0){
            if (half_sum > i){
                half_sum -= i;
            }
            else{
                outlier = half_sum;
                half_sum -= outlier;
            }
            num_equal += 1;
            i--;
        }
        std::cout << num_equal << std::endl;
        print_num_equal = num_equal;
        half_sum = sum/2;
        i = n;
        while (half_sum > 0){
            if (half_sum > i){
                half_sum -= i;
                std::cout << i << ' ';
            }
            else{
                std::cout << half_sum << std::endl;
                half_sum = 0;
            }
            num_equal += 1;
            i--;
        }
        std::cout << n - print_num_equal << std::endl;
        half_sum = sum/2;
        for (int j = n; j > 0; j--){
            if(half_sum > j){
                half_sum -= j;
            }
            else if(half_sum == j){
                half_sum -= j;
            }
            else {
                std::cout << j << ' ';
            }
            
        }
        std::cout << std::endl;
    }

}
