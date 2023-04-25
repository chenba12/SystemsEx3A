#include "Fraction.hpp"

namespace ariel {

    Fraction::Fraction() : numerator(0), denominator(1), gcdVal(0), lcmVal(0) {

    }

    Fraction::Fraction(int numerator, int denominator) : numerator(0), denominator(1), gcdVal(0), lcmVal(0) {

    }

    Fraction::Fraction(const Fraction &other) : numerator(0), denominator(1), gcdVal(0), lcmVal(0) {

    }

    Fraction::Fraction(float number) : numerator(0), denominator(1), gcdVal(0), lcmVal(0) {

    }

    Fraction &Fraction::operator=(const Fraction &other) {
        return *this;
    }

    Fraction &Fraction::operator=(float number) {
        return *this;
    }

    Fraction &Fraction::operator=(Fraction &&other) noexcept {
        return *this;
    }

    Fraction::Fraction(Fraction &&other) noexcept: numerator(0), denominator(1), gcdVal(0), lcmVal(0) {

    }

    Fraction::~Fraction() = default;

    bool Fraction::operator==(const Fraction &other) const {
        return false;
    }

    bool Fraction::operator==(float number) const {
        return false;
    }

    bool Fraction::operator!=(const Fraction &other) const {
        return false;
    }

    bool Fraction::operator!=(float number) const {
        return false;
    }

    bool Fraction::operator<(const Fraction &other) const {
        return false;
    }

    bool Fraction::operator<(float number) const {
        return false;
    }

    bool Fraction::operator<=(const Fraction &other) const {
        return false;
    }

    bool Fraction::operator<=(float number) const {
        return false;
    }

    bool Fraction::operator>(const Fraction &other) const {
        return false;
    }

    bool Fraction::operator>(float number) const {
        return false;
    }

    bool Fraction::operator>=(const Fraction &other) const {
        return false;
    }

    bool Fraction::operator>=(float number) const {
        return false;
    }

    Fraction Fraction::operator+(const Fraction &other) const {
        return {};
    }

    Fraction Fraction::operator+(float number) const {
        return {};
    }

    Fraction &Fraction::operator+=(const Fraction &other) {
        return *this;
    }

    Fraction &Fraction::operator+=(float number) {
        return *this;
    }

    Fraction Fraction::operator-(const Fraction &other) const {
        return {};
    }

    Fraction Fraction::operator-(float number) const {
        return {};
    }

    Fraction &Fraction::operator-=(const Fraction &other) {
        return *this;
    }

    Fraction &Fraction::operator-=(float number) {
        return *this;
    }

    Fraction Fraction::operator*(const Fraction &other) const {
        return {};
    }

    Fraction Fraction::operator*(float number) const {
        return {};
    }

    Fraction &Fraction::operator*=(const Fraction &other) {
        return *this;
    }

    Fraction &Fraction::operator*=(float number) {
        return *this;
    }

    Fraction Fraction::operator/(const Fraction &other) const {
        return {};
    }

    Fraction Fraction::operator/(float number) const {
        return {};
    }

    Fraction Fraction::operator/(const Fraction &other) {
        return {};
    }

    Fraction &Fraction::operator/=(const Fraction &other) {
        return *this;
    }

    Fraction &Fraction::operator/=(float number) {
        return *this;
    }

    Fraction &Fraction::operator++() {
        return *this;
    }

    const Fraction Fraction::operator++(int) {
        return Fraction();
    }

    Fraction &Fraction::operator--() {
        return *this;
    }

    const Fraction Fraction::operator--(int) {
        return Fraction();
    }

    void Fraction::reduce() {

    }

    int Fraction::LCM(int num, int den) {
        return 0;
    }

    int Fraction::GCD(int num, int den) {
        return 0;
    }

    Fraction Fraction::fractionMinus(const Fraction &other) {
        return {};
    }

    Fraction Fraction::fractionDiv(const Fraction &other) {
        return {};
    }

    bool operator==(float number, const Fraction &other) {
        return false;
    }

    bool operator!=(float number, const Fraction &other) {
        return false;
    }

    bool operator<(float number, const Fraction &other) {
        return false;
    }

    bool operator<=(float number, const Fraction &other) {
        return false;
    }

    bool operator>(float number, const Fraction &other) {
        return false;
    }

    bool operator>=(float number, const Fraction &other) {
        return false;
    }

    Fraction operator+(float number, const Fraction &other) {
        return {};
    }

    Fraction operator-(float number, const Fraction &other) {
        return {};
    }

    Fraction operator*(float number, const Fraction &other) {
        return {};
    }

    Fraction operator/(float number, const Fraction &other) {
        return {};
    }

    std::ostream &operator<<(std::ostream &ostream, const Fraction &other) {
        return ostream;
    }

    std::istream &operator>>(std::istream &istream, Fraction &other) {
        return istream;
    }
}