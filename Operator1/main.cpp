//Остальные операции с дробями.
//Задание 2.
#include <iostream>
class Fraction
{
private:
    int numerator_;
    int denominator_;
public:
    Fraction(int numerator, int denominator)
    {
        numerator_ = numerator;
        denominator_ = denominator;
    }
    int getNumerator() const {
        return numerator_;
    }
    int getDenominator() const {
        return denominator_;
    }
    Fraction operator+(const Fraction& other) const
    {
        int newNumerator = (numerator_ * other.denominator_) + (denominator_ * other.numerator_);
        int newDenominator = denominator_ * other.denominator_;
        return Fraction(newNumerator, newDenominator);
    }
    Fraction operator-(const Fraction& other) const
    {
        int newNumerator = (numerator_ * other.denominator_) - (denominator_ * other.numerator_);
        int newDenominator = denominator_ * other.denominator_;
        return Fraction(newNumerator, newDenominator);
    }
    Fraction operator*(const Fraction& other) const
    {
        int newNumerator = numerator_ * other.numerator_;
        int newDenominator = denominator_ * other.denominator_;
        return Fraction(newNumerator, newDenominator);
    }
    Fraction operator/(const Fraction& other) const {
        int newNumerator = numerator_ * other.denominator_;
        int newDenominator = denominator_ * other.numerator_;
        return Fraction(newNumerator, newDenominator);
    }
    Fraction& operator++()
    {
        ++numerator_;
        return *this;
    }
    Fraction operator++(int)
    {
        Fraction temp(*this);
        ++*this;
        return temp;
    }
    Fraction& operator--()
    {
        numerator_--;
        return *this;
    }
    Fraction operator--(int)
    {
        Fraction temp(*this);
        --*this;
        return temp;
    }
    Fraction operator-() const
    {
        return Fraction(-numerator_, -denominator_);
    }
    void setNumerator(int numerator) {
        numerator_ = numerator;
    }
    void setDenominator(int denominator) {
        denominator_ = denominator;
    }
};
int main()
{
    Fraction f1(0, 0);
    Fraction f2(0, 0);
    std::cout << "Введите числитель дроби 1: ";
    int numerator;
    std::cin >> numerator;
    f1.setNumerator(numerator);
    std::cout << "Введите знаменатель дроби 1: ";
    int denominator;
    std::cin >> denominator;
    f1.setDenominator(denominator);
    std::cout << "Введите числитель дроби 2: ";
    std::cin >> numerator;
    f2.setNumerator(numerator);
    std::cout << "Введите знамменатель дроби 2: ";
    std::cin >> denominator;
    f2.setDenominator(denominator);
    Fraction sum = f1 + f2;
    Fraction sub = f1 - f2;
    Fraction mul = f1 * f2;
    Fraction div = f1 / f2;
    Fraction inc = ++f1 * f2;
    Fraction dec = f1-- * f2;
    Fraction neg = -f1, neg2 = -f2;
    Fraction result = f1 + f2;
    std::cout << f1.getNumerator() << "/" << f1.getDenominator() << " + " << f2.getNumerator() << "/" << f2.getDenominator() << " = " << result.getNumerator() << "/" << result.getDenominator() << std::endl;
    std::cout << f1.getNumerator() << "/" << f1.getDenominator() << " - " << f2.getNumerator() << "/" << f2.getDenominator() << " = " << result.getNumerator() << "/" << result.getDenominator() << std::endl;
    std::cout << f1.getNumerator() << "/" << f1.getDenominator() << " * " << f2.getNumerator() << "/" << f2.getDenominator() << " = " << result.getNumerator() << "/" << result.getDenominator() << std::endl;
    std::cout << f1.getNumerator() << "/" << f1.getDenominator() << " / " << f2.getNumerator() << "/" << f2.getDenominator() << " = " << result.getNumerator() << "/" << result.getDenominator() << std::endl;
    std::cout << "++" << f1.getNumerator() << "/" << f1.getDenominator() << " * " << f2.getNumerator() << "/" << f2.getDenominator() << " = " << result.getNumerator() << "/" << result.getDenominator() << std::endl;
    std::cout << "Значение дроби 1: " << result.getNumerator() << "/" << result.getDenominator() << std::endl;
    std::cout << f1.getNumerator() << "/" << f1.getDenominator() << "--" << " * " << f2.getNumerator() << "/" << f2.getDenominator() << " = " << result.getNumerator() << "/" << result.getDenominator() << std::endl;
    std::cout << "Значение дроби 1: " << result.getNumerator() << "/" << result.getDenominator() << std::endl;
}