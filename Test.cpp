#include "doctest.h"
#include <stdexcept>
#include "sources/Fraction.hpp"
using namespace ariel;

TEST_CASE("the operator +")
{
    Fraction num1(1, 2);
    Fraction num2(3, 4);

    CHECK((num1 + num2).getDenominator() == 5);
    CHECK((num1 + num2).getNumerator() == 4);

    CHECK((num1 + 3.2).getDenominator() == 37);
    CHECK((num1 + 3.2).getNumerator() == 10);

    CHECK((0.5 + num1).getDenominator() == 1);
    CHECK((0.5 + num1).getNumerator() == 1);

    CHECK((1.1236 + num1).getDenominator() == 203); // round
    CHECK((1.1236 + num1).getNumerator() == 125);   // round
}

TEST_CASE("the operator -")
{
    Fraction num1(1, 2);
    Fraction num2(2, 3);

    CHECK((num1 - num2).getDenominator() == -1);
    CHECK((num1 - num2).getNumerator() == 6);

    CHECK((num1 - 0.5).getDenominator() == 0);
    CHECK((num1 - 0.5).getNumerator() == 1);

    CHECK((1.5 - num1).getDenominator() == 1);
    CHECK((1.5 - num1).getNumerator() == 1);
}

TEST_CASE("the operator *")
{
    Fraction num1(1, 2);
    Fraction num2(2, 3);

    CHECK((num1 * num2).getDenominator() == 1);
    CHECK((num1 * num2).getNumerator() == 3);

    CHECK((num1 * 2.3).getDenominator() == 23);
    CHECK((num1 * 2.3).getNumerator() == 20);

    CHECK((3.2 * num1).getDenominator() == 8);
    CHECK((3.2 * num1).getNumerator() == 5);
}
TEST_CASE("the operator /")
{
    Fraction num1(1, 2);
    Fraction num2(2, 3);

    CHECK((num1 / num2).getDenominator() == 3);
    CHECK((num1 / num2).getNumerator() == 4);

    CHECK((num1 / 2.3).getDenominator() == 5);
    CHECK((num1 / 2.3).getNumerator() == 23);

    CHECK((3.2 / num1).getDenominator() == 32);
    CHECK((3.2 / num1).getNumerator() == 5);
}
TEST_CASE("the operator >=")
{
    Fraction num1(1, 2);
    Fraction num2(2, 3);

    CHECK(num2 >= num1);
    CHECK(num1 >= 0.5);
    CHECK(0.6 >= num1);
}
TEST_CASE("the operator <=")
{
    Fraction num1(1, 2);
    Fraction num2(9, 10);

    CHECK(num1 <= num2);
    CHECK(num1 <= 0.5);
    CHECK(0.6 <= num2);
}
TEST_CASE("the operator <")
{
    Fraction num1(1, 2);
    Fraction num2(9, 10);

    CHECK(num1 < num2);
    CHECK(num1 < 0.6);
    CHECK(0.6 < num2);
}
TEST_CASE("the operator >")
{
    Fraction num1(1, 2);
    Fraction num2(9, 10);

    CHECK(num2 > num1);
    CHECK(num2 > 0.6);
    CHECK(1 > num2);
}
TEST_CASE("the operator ==")
{
    Fraction num1(1, 2);
    Fraction num2(9, 10);

    CHECK(!(num2 == num1));
    CHECK(num2 == 0.9);
    CHECK(0.5 == num1);
}
TEST_CASE("the operator ++")
{
    Fraction num1(1, 2);
    num1++;
    CHECK(num1.getDenominator() == 3);
    CHECK(num1.getNumerator() == 2);
    ++num1;
    CHECK(num1.getDenominator() == 5);
    CHECK(num1.getNumerator() == 2);

    CHECK(num1++.getDenominator() == 5);
    CHECK(num1++.getNumerator() == 2);

    CHECK((++num1).getDenominator() == 7);
    CHECK((++num1).getNumerator() == 2);
}
TEST_CASE("the operator --")
{
    Fraction num1(7, 6);
    Fraction num2(32, 6);

    num1--;
    CHECK(num1.getDenominator() == 1);
    CHECK(num1.getNumerator() == 6);
    --num2;
    CHECK(num1.getDenominator() == 13);
    CHECK(num1.getNumerator() == 3);

    CHECK(num1--.getDenominator() == 13);
    CHECK(num1--.getNumerator() == 3);

    CHECK((--num1).getDenominator() == 10);
    CHECK((--num1).getNumerator() == 3);
}