#include "SnackSlot.h"
#include <string>
#include "Snack.h"
#include <iostream>

using namespace std;

SnackSlot::SnackSlot(int count)
{
	_count = count;
}

void SnackSlot::AddSnack(Snack* snack)
{
	for (int i = 0; i < 10; i++)
	{
		if (countSnackInSlot[i] == NULL)
		{
			countSnackInSlot[i] = 1;
			_slot[i] = *snack;
		}
	}
}

int SnackSlot::GetCountFreeSlots()
{
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		if (countSnackInSlot[i] == NULL)
		{
			count++;
		}
	}

	return count;
}

int SnackSlot::GetCountSlots()
{
	return _count;
}

void SnackSlot::SetCountSlots(int count)
{
	_count = count;
}