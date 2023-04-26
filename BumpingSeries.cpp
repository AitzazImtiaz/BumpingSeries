#include <iostream>

#include "InfInt.h"

#include <cmath>



#include "InfInt.h"

InfInt power(InfInt base, InfInt exp) {
    InfInt result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}

InfInt a(InfInt n) {
    InfInt two = 2;
    InfInt ceilSqrtN = 1, temp = 1;
    while (temp * temp <= n) {
        ceilSqrtN = temp;
        temp++;
    }
    InfInt y = ceilSqrtN * (ceilSqrtN - 1);
    InfInt z = (n - y - 1 < 0) ? (y - n + 1) : (n - y - 1);
    InfInt result = (n + 1) * power(two, z) / 2;
    return result;
}

int main()
{
    InfInt n = 1;
    while(true) {
        std::cout << a(n);
        n = n + 1;
        std::cout << "\n";
    }
    std::cin.get();
}
