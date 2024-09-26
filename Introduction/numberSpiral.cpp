#include <iostream>
int main(){
    unsigned long long y, x;
    unsigned long long answer;
    unsigned int t;
    std::cin >> t;
    for (long long i = 0; i < t; i++){
        answer = 0;
        std::cin >> y >> x;
        answer += std::max(x, y) * std::max(x, y) - std::max(x, y) + 1;
        if (x > y){
            if (x % 2 == 0){
                answer -= (x - y);
            }
            else {answer += (x - y);};
        }
        if (y > x){
            if (y % 2 == 1){
                answer -= (y - x);
            }
            else {answer += (y - x);};
        }

       std::cout << answer << std::endl;

    }

}


