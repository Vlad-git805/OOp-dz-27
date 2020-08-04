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

bool sortByName(const Car &lhs, const Car &rhs) { return lhs.name < rhs.name; }

bool sortByYear(const Car &lhs, const Car &rhs) { return lhs.year < rhs.year; }

bool sortByEngine_capacity(const Car &lhs, const Car &rhs) { return lhs.engine_capacity < rhs.engine_capacity; }

bool sortByPrice(const Car &lhs, const Car &rhs) { return lhs.price < rhs.price; }

class Ñar_dealership
{
private:
	vector<Car> cars;
public:
	void Add_car(const Car& car)
	{
		cars.push_back(car);
	}

	void Delete_cars_that_less_2000()
	{
		for (auto iter = cars.begin(); iter < cars.end(); iter++)
		{
			if ((*iter).Get_year() < 2000)
			{
				cars.erase(iter);
			}
		}
	}

	void ShowAllCars()
	{
		for (auto iter = cars.begin(); iter < cars.end(); iter++)
		{
			(*iter).ShowInfo();
		}
	}

	void Sort_by_name()
	{
		sort(cars.begin(), cars.end(), sortByName);
	}

	void Sort_by_Year()
	{
		sort(cars.begin(), cars.end(), sortByYear);
	}

	void Sort_by_engine_capacity()
	{
		sort(cars.begin(), cars.end(), sortByEngine_capacity);
	}

	void Sort_by_price()
	{
		sort(cars.begin(), cars.end(), sortByPrice);
	}

	void Find_by_name(string name)
	{
		for (auto iter = cars.begin(); iter < cars.end(); iter++)
		{
			if ((*iter).Get_name() == name)
			{
				(*iter).ShowInfo();
			}
		}
	}

	void Find_by_year(int year)
	{
		for (auto iter = cars.begin(); iter < cars.end(); iter++)
		{
			if ((*iter).Get_year() == year)
			{
				(*iter).ShowInfo();
			}
		}
	}

	void Find_by_engine_capacity(int engine_capacity)
	{
		for (auto iter = cars.begin(); iter < cars.end(); iter++)
		{
			if ((*iter).Get_engine_capacity() == engine_capacity)
			{
				(*iter).ShowInfo();
			}
		}
	}

	void Find_by_price(int price)
	{
		for (auto iter = cars.begin(); iter < cars.end(); iter++)
		{
			if ((*iter).Get_price() == price)
			{
				(*iter).ShowInfo();
			}
		}
	}

	int Total_price_of_cars_younger_than_5_years()
	{
		int totalprice = 0;
		for (auto iter = cars.begin(); iter < cars.end(); iter++)
		{
			if (2020 - (*iter).Get_year() < 5)
			{
				totalprice += (*iter).Get_price();
			}
		}
		return totalprice;
	}

	void Reduce_price_by_20_percent_for_all_cars_older_than_15()
	{
		for (auto iter = cars.begin(); iter < cars.end(); iter++)
		{
			if (2020 - (*iter).Get_year() >= 15)
			{
				int price = (*iter).Get_price();
				price /= 0.2;
				(*iter).Set_price(price);
			}
		}
	}

};