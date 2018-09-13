#include <iostream>
#include "gcd.hpp"

int main() {
    int a, b;
    std::cout << "Enter two positive integers: " << std::endl;
    std::cin >> a >> b;
    std::cout << "greatest cd: " << gcd(a, b) << std::endl;
    return 0;
}

int gcd(const int a, const int b) {
    while (a != b) {
        if (a > b) {
           return gcd(a - b, b);
        } else {
           return gcd(a, b - a);
        }
    }
    return a;
}