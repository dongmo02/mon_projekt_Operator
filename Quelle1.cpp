#include<iostream>
#include"Header1.h"
//#include<ostream>
using namespace std;
MAfraction::MAfraction()   
{
	numerator = 0;
	denominator = 1;
}
MAfraction::MAfraction(double num)
{
	numerator = num;
	denominator = 1;
}
MAfraction::MAfraction(double num, double denom) {
	numerator = num;
	denominator =  denom;


}

/*MA_fraction:: int get_numerator()
{

	return numerator;


}
MA_fraction::int get_denominator()
{

	return denominator;
} 

 std::ostream& operator << (std::ostream& os, const MA_fraction& ma_fraction); {
	//int a(ma_fraction.get_numerator())
	//int b(ma_fraction.get_denominator)
	os << "1" << "/" << "2";
	return os; */

/**
MA_fraction::void affiche() {

	cout << numerator << "/" << denominator;
}
*/
