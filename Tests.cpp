#include "doctest.h"
#include "sources/Fraction.hpp"

using namespace ariel;


TEST_CASE("CTOR test") {
    CHECK_THROWS(Fraction(2, 0));
    CHECK_NOTHROW(Fraction(0, 2));
    CHECK_NOTHROW(Fraction(0.2));
    CHECK_NOTHROW(Fraction(0, 0));
}

TEST_CASE("+ operator") {
    Fraction a(3, 5); // 3/5
    Fraction b(2, 5); // 2/5
    float scalar = 1;
    Fraction c(1, 6);
    Fraction d(1, 6);
    Fraction res1(1, 3);
    Fraction res2(11, 5);
    float res3 = 2.2;
    CHECK((a + b == scalar));
    CHECK((c + d == res1)); //check reduced form
    CHECK((scalar + a == res2));
    CHECK((scalar + a == res3));
    CHECK(((scalar + a == a + scalar) && (a + b == b + a)));
}

TEST_CASE("- operator") {
    Fraction a(3, 5); // 3/5
    Fraction b(2, 5); // 2/5
    float scalar = 1;
    Fraction c(1, 6);
    Fraction d(1, 6);
    Fraction res1(1, 3);
    Fraction res2(11, 5);
    float res3 = 2.2;
    CHECK((a - b == scalar));
    CHECK((c - d == res1)); //check reduced form
    CHECK((scalar - a == res2));
    CHECK((scalar - a == res3));
    CHECK((scalar - a != a - scalar));

}

TEST_CASE("* operator") {

}

TEST_CASE("/ operator") {

}

TEST_CASE("divide by 0") {

}

TEST_CASE("* and / for numbers between (0,1)") {

}

TEST_CASE("negative numbers") {

}





