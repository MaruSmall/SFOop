#pragma once
#include <string>

using namespace std;
class Snack
{
public:

	Snack();
	Snack(string name);
	Snack(string name, int price);
	~Snack() = default;

	string GetName();
	void SetName(string name);

	int GetPriceSnack();
	void SetPriceSnack(int price);

private:
	string _name;
	int _price;
};



