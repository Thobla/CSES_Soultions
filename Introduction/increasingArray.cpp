#include<iostream>

int main(){
    long currVal;
    long nextVal;
    long movesPerformed = 0;
    std::cin >> currVal;
    std::cin >> currVal;
    while (std::cin >> nextVal){
        if (nextVal < currVal){movesPerformed += currVal - nextVal;}
        else{currVal = nextVal;};
    }
    std::cout << movesPerformed << std::endl;

}
