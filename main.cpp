#include "bigInteger.h"
#include <iostream>

int main() {
    string a, b;

    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter second number" << endl;
    cin >> b;
    BigInteger m(a);
    BigInteger n(b);
    m += n;
    std::cout << string(m);
    return 0;
}
