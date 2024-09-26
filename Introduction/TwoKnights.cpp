#include<iostream>

int main(){
    int n;
    long long sum;
    std::cin >> n;
    for (int k = 1; k <= n; k++){
        sum = (k*k) * (k*k - 1) / 2; //Total number 2 identical pieces can be placed
        if (k >= 3){
            if (k >= 4){
            }
            if (k >= 5){
            }
        }
        std::cout << sum << std::endl;
    }
}
