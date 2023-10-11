#pragma once
#include <iostream>
using namespace std;

int LCM(int first, int second) //Наибольший общий делитель
{
	first = abs(first);
	second = abs(second);
	if (first % second == 0)
		return second;
	if (second % first == 0)
		return first;
	if (first > second)
		return LCM(first % second, second);
	return LCM(first, second % first);
}

class Fraction
{
	int numerator_;
	int denominator_;
public:
	Fraction(int numerator, int denominator) {
		if (denominator == 0) denominator = 1;
		if (denominator < 0) denominator = abs(denominator);
		numerator_ = numerator;
		denominator_ = denominator;
		reduction();
	}

	void reduction() {
		int a = LCM(numerator_, denominator_);
		numerator_ /= a;
		denominator_ /= a;
	}

	int getNum() {
		return numerator_;
	}

	int getDenom() {
		return denominator_;
	}

	int getInt() {
		return numerator_ / denominator_;
	}

	Fraction operator + (Fraction& c) {
		return Fraction{ numerator_ * c.denominator_ + denominator_ * c.numerator_, denominator_ * c.denominator_ };
	}

	Fraction& operator += (Fraction& c) {
		numerator_ *= c.denominator_;
		numerator_ += c.numerator_ * denominator_;
		denominator_ *= c.denominator_;
		reduction();
		return *this;
	}

	Fraction operator + (int a) {
		return Fraction{ numerator_ + a * denominator_, denominator_ };
	}

	Fraction& operator += (int a) {
		numerator_ += a * denominator_;
		return *this;
	}

	Fraction operator - (Fraction& c) {
		return Fraction{ numerator_ * c.denominator_ - denominator_ * c.numerator_, denominator_ * c.denominator_ };
	}

	Fraction& operator -= (Fraction& c) {
		numerator_ *= c.denominator_;
		numerator_ -= c.numerator_ * denominator_;
		denominator_ *= c.denominator_;
		reduction();
		return *this;
	}

	Fraction operator - (int a) {
		return Fraction{ numerator_ - a * denominator_, denominator_ };
	}

	Fraction& operator -= (int a) {
		numerator_ += a * denominator_;
		return *this;
	}

	Fraction operator * (Fraction& c) {
		return Fraction{ numerator_ * c.numerator_, denominator_ * c.denominator_ };
	}

	Fraction& operator *= (Fraction& c) {
		numerator_ *= c.numerator_;
		denominator_ *= c.denominator_;
		reduction();
		return *this;
	}

	Fraction operator * (int a) {
		return Fraction{ numerator_ * a, denominator_ };
	}

	Fraction& operator *= (int a) {
		numerator_ *= a;
		reduction();
		return *this;
	}

	Fraction operator / (Fraction& c) {
		if (c.numerator_ == 0) {
			cout << "Division by zero!";
			return Fraction{ numerator_, denominator_ };
		}
		return Fraction{ numerator_ * c.denominator_, denominator_ * c.numerator_ };
	}

	Fraction& operator /= (Fraction& c) {
		if (c.numerator_ == 0) {
			cout << "Division by zero!";
			return *this;
		}
		numerator_ *= c.denominator_;
		denominator_ *= c.numerator_;
		reduction();
		return *this;
	}

	Fraction operator / (int a) {
		if (a == 0) {
			cout << "Division by zero!";
			return Fraction{ numerator_, denominator_ };
		}
		return Fraction{ numerator_, denominator_ * a };
	}

	Fraction& operator /= (int a) {
		if (a == 0) {
			cout << "Division by zero!";
			return *this;
		}
		denominator_ *= a;
		reduction();
		return *this;
	}

	Fraction& operator ++ () {
		numerator_ += denominator_;
		return (*this);
	}

	Fraction operator ++ (int) {
		Fraction copy = { *this };
		++(*this);
		return copy;
	}

	Fraction& operator -- () {
		numerator_ -= denominator_;
		return (*this);
	}

	Fraction operator -- (int) {
		Fraction copy = { *this };
		--(*this);
		return copy;
	}

	bool operator > (Fraction& c) {
		return (numerator_ * c.denominator_) > (denominator_ * c.numerator_);
	}

	bool operator >= (Fraction& c) {
		return (numerator_ * c.denominator_) >= (denominator_ * c.numerator_);
	}

	bool operator > (int a) {
		return numerator_ > (denominator_ * a);
	}

	bool operator >= (int a) {
		return numerator_ >= (denominator_ * a);
	}

	bool operator < (Fraction& c) {
		return (numerator_ * c.denominator_) < (denominator_ * c.numerator_);
	}

	bool operator <= (Fraction& c) {
		return (numerator_ * c.denominator_) <= (denominator_ * c.numerator_);
	}

	bool operator < (int a) {
		return numerator_ < (denominator_* a);
	}

	bool operator <= (int a) {
		return numerator_ <= (denominator_ * a);
	}

	double fr_to_double() {
		return double(numerator_) / denominator_;
	}
};