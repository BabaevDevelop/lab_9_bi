#include "bigInteger.h"
#include <iostream>

int main() {
    string a, b;
<<<<<<< HEAD
    BigInteger m;
    BigInteger n;
    std::cin >> a >> b;
    m.setNumber(a);
    n.setNumber(b);
    m = m - n;
    std::cout << m.getNumber();
=======

    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter second number" << endl;
    cin >> b;
    BigInteger m(a);
    BigInteger n(b);
    m += n;
    std::cout << string(m);
>>>>>>> a95c17f5d1aa241a5b4da5cd8a484dac807404d6
    return 0;
}
