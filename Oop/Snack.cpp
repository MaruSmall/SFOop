#include "Snack.h"
#include <iostream>
#include <string>

using namespace std;

Snack::Snack() {}

Snack::Snack(string name)
{
	_name = name;
}

Snack::Snack(string name, int price)
{
	_name = name;
	_price = price;
}

void Snack::SetName(string name)
{
	_name = name;
}

string Snack::GetName()
{
	return _name;
}

int Snack::GetPriceSnack()
{
	return _price;
}

void Snack::SetPriceSnack(int price)
{
	_price = price;
}
