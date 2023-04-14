//
// Created by chen on 4/14/23.
//

#ifndef SYSTEMSEX3A_FRACTION_H
#define SYSTEMSEX3A_FRACTION_H

#include <ostream>

namespace ariel {
    class Fraction {
    private:
        int numerator;
        int denominator;
    public:
        Fraction(int numerator, int denominator);

        Fraction(const Fraction &fraction);

        Fraction &operator=(const Fraction &other);

        Fraction &operator=(float scalar);

        explicit Fraction(float scalar);



        // fraction vs fraction comparison operators

        // == operator functions
        bool operator==(const Fraction &other) const;

        bool operator==(float scalar) const;

        friend bool operator==(float scalar, const Fraction &f);


        // != operator functions
        bool operator!=(const Fraction &other) const;

        bool operator!=(float scalar) const;

        friend bool operator!=(float scalar, const Fraction &f);

        // < operator functions
        bool operator<(const Fraction &other) const;

        bool operator<(float scalar) const;

        friend bool operator<(float scalar, const Fraction &f);


        // <= operator functions
        bool operator<=(const Fraction &other) const;

        bool operator<=(float scalar) const;

        friend bool operator<=(float scalar, const Fraction &f);

        // > operator functions
        bool operator>(const Fraction &other) const;

        bool operator>(float scalar) const;

        friend bool operator>(float scalar, const Fraction &f);

        // >= operator functions
        bool operator>=(const Fraction &other) const;

        bool operator>=(float scalar) const;

        friend bool operator>=(float scalar, const Fraction &f);

        // + operator functions
        Fraction operator+(const Fraction &other) const;

        Fraction operator+(float scalar) const;

        friend Fraction operator+(float scalar, const Fraction &f);

        // += operator functions
        Fraction &operator+=(const Fraction &other);

        Fraction &operator+=(float scalar);

        // - operator functions
        Fraction operator-(const Fraction &other) const;

        Fraction operator-(float scalar) const;

        friend Fraction operator-(float scalar, const Fraction &fraction);

        // -= operator functions
        Fraction &operator-=(const Fraction &other);

        Fraction &operator-=(float scalar);

        // * operator functions
        Fraction operator*(const Fraction &other) const;

        Fraction operator*(float scalar) const;

        friend Fraction operator*(double scalar, const Fraction &f);

        // *= operator functions
        Fraction &operator*=(const Fraction &other);

        Fraction &operator*=(float scalar);

        // / operator functions
        Fraction operator/(const Fraction &other) const;

        Fraction operator/(float scalar) const;

        friend Fraction operator/(double scalar, const Fraction &f);

        // /= operator functions
        Fraction &operator/=(const Fraction &other);

        Fraction &operator/=(float scalar);

        // ++fraction
        Fraction &operator++();

        // fraction++
        const Fraction operator++(int);

        // --fraction
        Fraction &operator--();

        // fraction--
        const Fraction operator--(int);


        // overload << output function
        friend std::ostream &operator<<(std::ostream &os, const Fraction &fraction);

        // overload >> input function
        friend std::istream &operator>>(std::istream &in, Fraction &f);
    };
}

#endif //SYSTEMSEX3A_FRACTION_H
