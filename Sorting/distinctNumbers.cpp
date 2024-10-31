#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <set>
int main(){
    long n, m, counter;
    //long *box = (long*) malloc((long long) pow(10, 9) * sizeof(long));
    std::set<int> box;
    counter = 0;
    std::cin >> n;
    for (long i = 0; i < n; i++){
        std::cin >> m;
        if (!box.count(m)){
            box.insert(m);
            counter += 1;
        }
    }
    std::cout << counter << std::endl;
    //free(box);
}
