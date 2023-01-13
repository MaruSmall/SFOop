#pragma once
#include "Snack.h"
#include <vector>
using namespace std;

class SnackSlot
{
public:
	SnackSlot(int count);
	~SnackSlot() = default;

	int GetCountSlots();
	void SetCountSlots(int count);

	void AddSnack(Snack* snack);
	int GetCountFreeSlots();

private:
	int _count;
	Snack _slot[10] = {};
	int countSnackInSlot[10] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
};

