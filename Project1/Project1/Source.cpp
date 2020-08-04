#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

class Car
{
private:
	string name;
	int year;
	int engine_capacity;
	int price;
public:
	Car() : name(" "), year(0), engine_capacity(0), price(0) {}
	Car(string name, int year, int engine_capacity, int price) : name(name), year(year), engine_capacity(engine_capacity), price(price) {}
	void ShowInfo()
	{
		cout << "Name: " << name << endl;
		cout << "Year: " << year << endl;
		cout << "Engine capacity: " << engine_capacity << endl;
		cout << "Price: " << price << endl;
	}

	int Get_year()
	{
		return year;
	}

	string Get_name()
	{
		return name;
	}

	int Get_engine_capacity()
	{
		return engine_capacity;
	}

	int Get_price()
	{
		return price;
	}

	void Set_price(int price)
	{
		this->price = price;
	}

	friend bool sortByName(const Car &lhs, const Car &rhs);

	friend bool sortByYear(const Car &lhs, const Car &rhs);

	friend bool sortByEngine_capacity(const Car &lhs, const Car &rhs);

	friend bool sortByPrice(const Car &lhs, const Car &rhs);
};