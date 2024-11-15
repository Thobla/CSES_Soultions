#include <cmath>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <math.h>

void constructTree(int *tree, int *arr, int n){
    for (int i = ; condition; inc-expression) {
    
    }
}


int main(){
    int n, q, a, b;
    long min;
    std::cin >> n >> q; 
    int segmentTree[2*int(std::pow(2, std::ceil(std::log2(n))))];
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    constructTree(segmentTree, arr, n);

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


