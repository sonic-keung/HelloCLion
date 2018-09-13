#include <iostream>
#include "gcd.hpp"

int main() {
    std::cout << "gcd: " << gcd(19, 19) << std::endl;
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