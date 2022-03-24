//
// Created by jaggernaute on 3/23/22.
// 8kyu
//

#include <iostream>

int main() {
    std::cout << "==========================================================" << std::endl;
    std::cout << "|                                                        |" << std::endl;
    std::cout << "|                   volume of a cuboid                   |" << std::endl;
    std::cout << "|                                                        |" << std::endl;
    std::cout << "==========================================================" << std::endl;

    std::cout << "enter the length, width, and height of cuboid: " << std::endl;
    double length, width, height;
    std::cout << "length: ";
    std::cin >> length;

    std::cout << "width: ";
    std::cin >> width;

    std::cout << "height: ";
    std::cin >> height;

    std::cout << length * width * height << std::endl;
    return 0;
}