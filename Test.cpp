#include "doctest.h"
#include "sources/Fraction.hpp"
using namespace ariel;

TEST_CASE("Constructor")
{
    CHECK_THROWS(Fraction(5, 0));
}

TEST_CASE("Arithmetic operations on fractions")
{
    Fraction a(5, 3), b(-14, 12);
    Fraction addResult(1, 2);
    Fraction subResult(17, 6);
    Fraction mulResult(-35, 18);
    Fraction divResult(-10, 7);

    CHECK(a + b == addResult); // (5/3) + (-14/12) = (1/2)
    CHECK(a - b == subResult); // (5/3) - (-14/12) = (17/6)
    CHECK(a * b == mulResult); // (5/3) * (-14/12) = (-35/18)
    CHECK(a / b == divResult); // (5/3) / (-14/12) = (-10/7)
}

TEST_CASE("Arithmetic operations on floats and fractions")
{
    float f1 = 5.6, f2 = -1.9;
    Fraction a(5, 3), b(14, 12);

    // Combination of float and Fraction
    Fraction addResult1(109, 15);
    Fraction addResult2(-7, 30);
    CHECK(f1 + a == addResult1); // 5.6 + (5/3) = (109/15)
    CHECK(a + f2 == addResult2); // (5/3) + (-1.9) = (-7/30)

    Fraction subResult1(-107, 30);
    Fraction subResult2(-59, 15);
    CHECK(f2 - a == subResult1); // -1.9 - (5/3) = (-107/30)
    CHECK(a - f1 == subResult2); // (5/3) - (-1.9) = (-59/15)

    Fraction mulResult1(98, 15);
    CHECK(f1 * b == mulResult1); // 5.6 * (14/12) = (98/15)
    CHECK(b * f1 == mulResult1); // (14/12) * 5.6 = (98/15)

    Fraction divResult1(84, 25);
    Fraction divResult2(5, 24);
    CHECK(f1 / a == divResult1); // 5.6 / (5/3) = (84/25)
    CHECK(b / f1 == divResult2); // (14/12) / 5.6 = (5/24)

    // Only floats
    Fraction addResult(56, 5);
    Fraction subResult(15, 2);
    Fraction mulResult(-266, 25);
    Fraction divResult(-56, 19);

    CHECK(f1 + f1 == addResult); // 5.6 + 5.6 = (56/5)
    CHECK(f1 - f2 == subResult); // 5.6 - (-1.9) = (15/2)
    CHECK(f1 * f2 == mulResult); // 5.6 * (-1.9) = (-266/25)
    CHECK(f1 / f2 == divResult); // 5.6 / (-1.9) = (-56/19)
}

TEST_CASE("Accuracy of 3 digits after decimal point")
{
    float f1 = 2.5679;
    float f2 = 1.4566;
    CHECK(f1 * f2 == 3.737552); // 2.567 * 1.456 = 3.737552
}

TEST_CASE("Check reduced forms")
{
    Fraction f1(10, 20);
    Fraction f2(1, 2);
    CHECK(f1 == f2);
}

TEST_CASE("Comparison operations on fractions")
{
    // Add minus cases

    Fraction a(5, 3), b(14, 12);

    CHECK(a == a);
    CHECK_FALSE(a == b);

    CHECK((a > b));
    CHECK_FALSE(b > a);

    CHECK_FALSE(a < b);
    CHECK(b < a);

    Fraction c(5, 3);
    CHECK(a >= c);
    CHECK(a >= b);

    CHECK(a <= c);
    CHECK_FALSE(a <= b);
}

TEST_CASE("Comparison operations on floats and fractions")
{
    Fraction a(1, 2);

    CHECK(a == 0.5);
    CHECK_FALSE(0.6 == a);

    CHECK((a > 0.1));
    CHECK_FALSE(0.1 > a);

    CHECK_FALSE(a < 0.2);
    CHECK(0.2 < a);

    CHECK(a >= 0.5);
    CHECK(a >= -2.0);

    CHECK(a <= 0.5);
    CHECK_FALSE(a <= -2.0);
}

TEST_CASE("Increment and Decrement")
{
}

TEST_CASE("Stream")
{
}