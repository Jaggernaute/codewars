//
// Created by jaggernaute on 3/23/22.
// 8kyu
//

#include <iostream>
#include <vector>

int main() {
    std::cout << "==========================================================" << std::endl;
    std::cout << "|                                                        |" << std::endl;
    std::cout << "|                   string decomposition                 |" << std::endl;
    std::cout << "|                                                        |" << std::endl;
    std::cout << "==========================================================" << std::endl;


    std::string s = "*'&ABCDabcde12345";
    std::vector<int> result = {0,0,0,0};

    for(char& c : s) {
        if(isupper(c))result[0]++;
        else if(islower(c))result[1]++;
        else if(isdigit(c))result[2]++;
        else if(ispunct(c))result[3]++;
    }

    for(int i : result) {
        std::cout << i << " ";
    }

    return 0;
}