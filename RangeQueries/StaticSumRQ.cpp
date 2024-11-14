#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>


int main(){
    int n, q, a, b;
    long sum;
    std::string line;
    std::cin >> n >> q; 
    long prefixSum[n];
    for (int i = 0; i < n; i++) {
        std::cin >> prefixSum[i];
        if (i > 0){
            prefixSum[i] += prefixSum[i-1];
        }
    }

    for (int i=0; i < q; i++) {
        std::cin >> a >> b;
        if (a == 1){
            std::cout << prefixSum[b-1] << std::endl;
        }
        else{
        std::cout << prefixSum[b-1] - prefixSum[a-2] << std::endl;
        }
    }

}
