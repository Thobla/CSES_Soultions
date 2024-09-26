#include<iostream>

int main(){
    char myChar;
    long currCount = 0;
    long maxCount = 0;
    char maxChar;

    while (std::cin >> myChar){
        if (myChar != maxChar){
            maxChar = myChar;
            currCount = 0;
        }
        currCount++;
        if (currCount >= maxCount){
            maxChar = myChar;
            maxCount = currCount;
        }
    }
    std::cout << maxCount << std::endl;
}
