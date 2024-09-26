#include<iostream>

int main(){
    long n;
    long curr = 1;
    std::cin >> n;
    if (n < 4){
        if (n > 1){std::cout << "NO SOLUTION" << std::endl;}
        else {std::cout << n << std::endl;};
    }
    else if (n == 4){
        std::cout << 2 << " " << 4 << " " << 1 << " " << 3 << std::endl;
    }
    else{
        while (curr <= n){
            std::cout << curr << ' ';
            curr += 2;
        }
        curr = 2;
        while (curr <= n - 2){
            std::cout << curr << ' ';
            curr += 2;
        }
        std::cout << curr << std::endl;
    }
}
