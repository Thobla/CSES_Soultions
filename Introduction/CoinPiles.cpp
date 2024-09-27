#include <iostream>
#include <math.h>
int main(){
    long long a, b, t;
    std::cin >> t;
    for (int i = 0; i < t; i++){
        std::cin >> a >> b;
//        if ((a < 2 && b < 1) || (a < 1 && b < 2)){
//            std::cout << "NO" << std::endl;
//        }
        if (std::abs(a - b) <= std::min(a, b)){
            if (((a % 3) == 0 && (b % 3) == 0) || ((a % 3) == 2 && (b % 3) == 1) || ((a % 3) == 1 && (b % 3) == 2)){
                std::cout << "YES" << std::endl;
            }
            else{
                std::cout << "NO" << std::endl;
            }
        }
        else{
            std::cout << "NO" << std::endl;
        }


    }
}
