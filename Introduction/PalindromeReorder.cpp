#include <iostream>
#include <map>
#include <string>
#include <iterator>

int main(){
    std::map<char, int> map;
    std::string word;
    std::cin >> word;
    int oddSeen = 0;
    char oddChar = ' ';
    for (char c : word){
        map[c] = (map.count(c)==0) ? 1 : map[c] + 1;
    }
    for (auto keyValue: map){
        if (keyValue.second % 2 == 1){
            if (oddSeen){
                std::cout <<"NO SOLUTION" << std::endl;
                return 0;
            }
            oddSeen = 1;
            oddChar = keyValue.first;
        }
    }
    for (auto keyValue: map){
        if (keyValue.first != oddChar){
            for (int i = 0; i < ((keyValue.second + 1) / 2); i++){
                std::cout << keyValue.first;
            }
        }
    }
    if (oddChar != ' '){
        for (int i = 0; i < map[oddChar]; i++){
            std::cout << oddChar;
        }
    }
    for (auto keyValue = map.rbegin(); keyValue != map.rend(); ++keyValue){
        if (keyValue->first != oddChar){
            for (int i = 0; i < keyValue->second / 2; i++){
                std::cout << keyValue->first;
            }
        }
    }
    std::cout << std::endl;

}
