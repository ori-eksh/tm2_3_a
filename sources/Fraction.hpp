#include <string>
using namespace std;

namespace ariel
{

    class Fraction
    {
    private:
        int numerator;
        int denominator;

    public:
        void printCardD();

        int getNumerator() const { return this->numerator; }
        int getDenominator() const { return this->denominator; }

        Fraction(int numerator_, int _denominator) : numerator(numerator_), denominator(_denominator){};

        friend Fraction operator+(const Fraction &hulf1, const Fraction &hulf2); // Fraction+Fraction
        friend Fraction operator+(const Fraction &hulf1, float num);             // Fraction + float
        friend Fraction operator+(float num, const Fraction &hulf1);             // float + Fraction

        friend Fraction operator-(const Fraction &hulf1, const Fraction &hulf2); // Fraction - Fraction
        friend Fraction operator-(const Fraction &hulf1, float num);             // Fraction - float
        friend Fraction operator-(float num, const Fraction &hulf1);             // float - Fraction

        friend Fraction operator*(const Fraction &hulf1, const Fraction &hulf2); // Fraction * Fraction
        friend Fraction operator*(const Fraction &hulf1, float num);             // Fraction * float
        friend Fraction operator*(float num, const Fraction &hulf1);             // float * Fraction

        friend Fraction operator/(const Fraction &hulf1, const Fraction &hulf2); // Fraction / Fraction
        friend Fraction operator/(const Fraction &hulf1, float num);             // Fraction / float
        friend Fraction operator/(float num, const Fraction &hulf1);             // float / Fraction

        friend bool operator>=(const Fraction &hulf1, const Fraction &hulf2); // Fraction >= Fraction
        friend bool operator>=(const Fraction &hulf1, float num);             // Fraction >= float
        friend bool operator>=(float num, const Fraction &hulf1);             // float >= Fraction

        friend bool operator<=(const Fraction &hulf1, const Fraction &hulf2); // Fraction <= Fraction
        friend bool operator<=(const Fraction &hulf1, float num);             // Fraction <= float
        friend bool operator<=(float num, const Fraction &hulf1);             // float <= Fraction

        friend bool operator>(const Fraction &hulf1, const Fraction &hulf2); // Fraction > Fraction
        friend bool operator>(const Fraction &hulf1, float num);             // Fraction > float
        friend bool operator>(float num, const Fraction &hulf1);             // float > Fraction

        friend bool operator<(const Fraction &hulf1, const Fraction &hulf2); // Fraction < Fraction
        friend bool operator<(const Fraction &hulf1, float num);             // Fraction < float
        friend bool operator<(float num, const Fraction &hulf1);             // float < Fraction

        friend bool operator==(const Fraction &hulf1, const Fraction &hulf2); // Fraction == Fraction
        friend bool operator==(const Fraction &hulf1, float num);             // Fraction == float
        friend bool operator==(float num, const Fraction &hulf1);             // float == Fraction

        Fraction &operator--();   //--Fraction
        Fraction operator--(int); // Fraction--
        Fraction &operator++();   //++Fraction
        Fraction operator++(int); // Fraction++

        friend std::ostream &operator<<(std::ostream &oos, const Fraction &aaa);
        friend std::istream &operator>>(std::istream &iis, Fraction &aaa);
    };
}