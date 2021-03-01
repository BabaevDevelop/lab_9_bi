//
// Created by andrey on 20.02.2021.
//

#ifndef LAB9_BigInteger_H
#define LAB9_BigInteger_H

#include <string>

#define MAX 10000 // for strings

using namespace std;

//-------------------------------------------------------------
class BigInteger {
private:
    string number;
    bool sign{};
public:
    BigInteger(); // empty constructor initializes zero
    BigInteger(string s); // "string" constructor
    BigInteger(const string& s, bool sin); // "string" constructor
    BigInteger(int n); // "int" constructor
    void setNumber(const string& s);

    const string &getNumber(); // retrieves the number
    void setSign(bool s);

    const bool &getSign() const;

    BigInteger absolute(); // returns the absolute value
    void operator=(BigInteger b);

    bool operator==(const BigInteger &b);

    bool operator!=(const BigInteger &b);

    bool operator>(const BigInteger &b);

    bool operator<(const BigInteger &b);

    bool operator>=(const BigInteger &b);

    bool operator<=(const BigInteger &b);

    BigInteger &operator++(); // prefix
    const BigInteger operator++(int); // postfix
    BigInteger &operator--(); // prefix
    const BigInteger operator--(int); // postfix
    const BigInteger operator+(BigInteger b);

    const BigInteger operator-(BigInteger b);

    BigInteger operator*(BigInteger b);

    BigInteger operator/(BigInteger b);

    BigInteger operator%(BigInteger b);

    BigInteger &operator+=(const BigInteger &b);

    BigInteger &operator-=(const BigInteger &b);

    BigInteger &operator*=(const BigInteger &b);

    BigInteger &operator/=(const BigInteger &b);

    BigInteger &operator%=(const BigInteger &b);

    BigInteger &operator[](int n);

    BigInteger operator-(); // unary minus sign
    operator string(); // for conversion from BigInteger to string
private:
    static bool equals(BigInteger n1, BigInteger n2);

    static bool less(BigInteger n1, BigInteger n2);

    static bool greater(const BigInteger& n1, const BigInteger& n2);

    static string add(string number1, string number2);

    static string subtract(string number1, string number2);

    static string multiply(string n1, string n2);

    static pair<string, long long> divide(string n, long long den);

    static string toString(long long n);

    static long long toInt(const string& s);
};


#endif //LAB9_BigInteger_H
