#include "Fraction.hpp"
namespace ariel
{
    Fraction operator+(const Fraction &hulf1, const Fraction &hulf2) { return Fraction(0, 1); } // Fraction+Fraction
    Fraction operator+(const Fraction &hulf1, float num) { return Fraction(0, 1); }             // Fraction + float
    Fraction operator+(float num, const Fraction &hulf1) { return Fraction(0, 1); }             // float + Fraction

    Fraction operator-(const Fraction &hulf1, const Fraction &hulf2) { return Fraction(0, 1); } // Fraction - Fraction
    Fraction operator-(const Fraction &hulf1, float num) { return Fraction(0, 1); }             // Fraction - float
    Fraction operator-(float num, const Fraction &hulf1) { return Fraction(0, 1); }             // float - Fraction

    Fraction operator*(const Fraction &hulf1, const Fraction &hulf2) { return Fraction(0, 1); } // Fraction * Fraction
    Fraction operator*(const Fraction &hulf1, float num) { return Fraction(0, 1); }             // Fraction * float
    Fraction operator*(float num, const Fraction &hulf1) { return Fraction(0, 1); }             // float * Fraction

    Fraction operator/(const Fraction &hulf1, const Fraction &hulf2) { return Fraction(0, 1); } // Fraction / Fraction
    Fraction operator/(const Fraction &hulf1, float num) { return Fraction(0, 1); }             // Fraction / float
    Fraction operator/(float num, const Fraction &hulf1) { return Fraction(0, 1); }             // float / Fraction

    bool operator>=(const Fraction &hulf1, const Fraction &hulf2) { return true; } // Fraction >= Fraction
    bool operator>=(const Fraction &hulf1, float num) { return true; }             // Fraction >= float
    bool operator>=(float num, const Fraction &hulf1) { return true; }             // float >= Fraction

    bool operator<=(const Fraction &hulf1, const Fraction &hulf2) { return true; } // Fraction <= Fraction
    bool operator<=(const Fraction &hulf1, float num) { return true; }             // Fraction <= float
    bool operator<=(float num, const Fraction &hulf1) { return true; }             // float <= Fraction

    bool operator>(const Fraction &hulf1, const Fraction &hulf2) { return true; } // Fraction > Fraction
    bool operator>(const Fraction &hulf1, float num) { return true; }             // Fraction > float
    bool operator>(float num, const Fraction &hulf1) { return true; }             // float > Fraction

    bool operator<(const Fraction &hulf1, const Fraction &hulf2) { return true; } // Fraction < Fraction
    bool operator<(const Fraction &hulf1, float num) { return true; }             // Fraction < float
    bool operator<(float num, const Fraction &hulf1) { return true; }             // float < Fraction

    bool operator==(const Fraction &hulf1, const Fraction &hulf2) { return true; } // Fraction == Fraction
    bool operator==(const Fraction &hulf1, float num) { return true; }             // Fraction == float
    bool operator==(float num, const Fraction &hulf1) { return true; }             // float == Fraction

    Fraction &Fraction::operator--() { return *this; }                  //--Fraction
    Fraction Fraction::operator--(const int) { return Fraction(0, 1); } // Fraction--

    Fraction &Fraction::operator++() { return *this; }                  //++Fraction
    Fraction Fraction::operator++(const int) { return Fraction(0, 1); } // Fraction++
    std::ostream &operator<<(std::ostream &oos, const Fraction &aaa) { return oos; }
    std::istream &operator>>(std::istream &iis, Fraction &aaa) { return iis; }
}