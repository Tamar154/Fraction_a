#pragma once

#include <iostream>

namespace ariel
{
    class Fraction
    {

    private:
        int numerator;
        int denominator;

    public:
        Fraction() : numerator(0), denominator(1) {}
        Fraction(const int numerator, int denominator) : numerator(numerator), denominator(denominator) {}

        /*
            + oprator
        */
        Fraction operator+(const Fraction &other) const { return Fraction(1, 1); }
        Fraction operator+(const float flo) const { return Fraction(1, 1); }
        friend Fraction operator+(const float flo, const Fraction &frac) { return Fraction(1, 1); }

        /*
            - oprator
        */
        Fraction operator-(const Fraction &other) const { return Fraction(1, 1); }
        Fraction operator-(const float flo) const { return Fraction(1, 1); }
        friend Fraction operator-(const float flo, const Fraction &frac) { return Fraction(1, 1); }

        /*
         * oprator
         */
        Fraction operator*(const Fraction &other) const { return Fraction(1, 1); }
        Fraction operator*(const float flo) const { return Fraction(1, 1); }
        friend Fraction operator*(const float flo, const Fraction &frac) { return Fraction(1, 1); }

        /*
            / oprator
        */
        Fraction operator/(const Fraction &other) const { return Fraction(1, 1); }
        Fraction operator/(const float flo) const { return Fraction(1, 1); }
        friend Fraction operator/(const float flo, const Fraction &frac) { return Fraction(1, 1); }

        /*
            == oprator
        */
        bool operator==(const Fraction &other) const { return false; }
        bool operator==(const float flo) const { return false; }
        friend bool operator==(const float flo, const Fraction &frac) { return false; }

        /*
            > oprator
        */
        bool operator>(const Fraction &other) { return false; }
        bool operator>(const float flo) const { return false; }
        friend bool operator>(const float flo, const Fraction &frac) { return false; }

        /*
            < oprator
         */
        bool operator<(const Fraction &other) { return false; }
        bool operator<(const float flo) const { return false; }
        friend bool operator<(const float flo, const Fraction &frac) { return false; }

        /*
            >= oprator
        */
        bool operator>=(const Fraction &other) { return false; }
        bool operator>=(const float flo) const { return false; }
        friend bool operator>=(const float flo, const Fraction &frac) { return false; }

        /*
            <= oprator
        */
        bool operator<=(const Fraction &other) { return false; }
        bool operator<=(const float flo) const { return false; }
        friend bool operator<=(const float flo, const Fraction &frac) { return false; }

        /*
          ++ oprator
        */
        Fraction operator++() { return Fraction(1, 1); }
        Fraction operator++(int postfix) { return Fraction(1, 1); }

        /*
           -- oprator
         */
        Fraction operator--() { return Fraction(1, 1); }
        Fraction operator--(int postfix) { return Fraction(1, 1); }

        /*
           << oprator
         */
        friend std::ostream &operator<<(std::ostream &output, const Fraction &frac) { return output; }
        friend std::ostream &operator<<(std::ostream &output, const float flo) { return output; }

        /*
           >> oprator
         */
        friend std::istream &operator>>(std::istream &input, const Fraction &frac) { return input; }
        friend std::istream &operator>>(std::istream &input, const float flo) { return input; }
    };
}