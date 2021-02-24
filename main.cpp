#include "bigInteger.h"
#include <iostream>

int main() {
    string a, b;
    BigInteger m;
    BigInteger n;
    std::cin >> a >> b;
    m.setNumber(a);
    n.setNumber(b);
    m += n;
    std::cout << m.getNumber();
    return 0;
}
