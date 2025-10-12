#pragma once

#include<iostream>
#include<ostream>

class MAfraction 
{
    public:
		MAfraction(double num);
	MAfraction(double num , double denom);
	MAfraction();
	/* MA_fraction& operator += (MA_fraction const& ma_fraction);
	MA_fraction& operator -= (MA_fraction const& ma_fraction);
	MA_fraction& operator *= (MA_fraction const& ma_fraction);
	MA_fraction& operator /= (MA_fraction const& ma_fraction);
	MA_fraction  operator + (MA_fraction const& ma_fraction1);
	MA_fraction  operator - (MA_fraction const& ma_fraction1);
	MA_fraction  operator * (MA_fraction const& ma_fraction1);
	MA_fraction  operator / (MA_fraction const& ma_fraction1);
	//std::ostream& operator<<(std::ostream& os, const MA_fraction& ma_fraction);
	int get_numerator();
	int get_denominator();
	void affiche();m  */
    private:
	int numerator;
	int denominator;
};
