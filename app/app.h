#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{
	//class tire;

	double operator "" _inch(unsigned long long length);

	double operator "" _eur(unsigned long long money);

	class product 
	{
	public:
		product(double price);
		double price();

	private:
		double m_price;
	};

	class vehicle 
	{
	public:
		vehicle(int year);
		int year();

	private:
		int m_year;
	};


	class tire
	{
	public:
		tire(double tireSize);
		double diameter();

	private:
		double m_tireSize;
	};

	class car : public product, public vehicle 
	{
	public:
		car(int year, double price, double tireSize);
		double tire_diameter();

	private:
		tire m_carTire;
	};

}