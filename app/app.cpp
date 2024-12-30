#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
	double operator "" _inch(unsigned long long length)
	{
		return length * 2.54;
	}

	double operator "" _eur(unsigned long long money)
	{
		return money * 7.5345;
	}

	product::product(double price)
	{
		m_price = price;
	}


	tire::tire(double size)
	{
		m_tireSize = size;
	}

	vehicle::vehicle(int year) 
	{
		m_year = year;
	}

	car::car(int year, double price, double tireSize):
		vehicle(year),
		product(price),
		m_carTire(tireSize) 
	{}

	int vehicle::year() 
	{
		return m_year;
	}

	double tire::diameter() 
	{
		return m_tireSize;
	}

	double product::price() 
	{
		return m_price;
	}

	double car::tire_diameter() 
	{
		return m_carTire.diameter();
	}
}