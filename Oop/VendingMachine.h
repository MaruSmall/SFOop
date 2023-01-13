#pragma once
#include "SnackSlot.h"
class VendingMachine
{
public:
	VendingMachine(int slotCount);
	~VendingMachine() = default;

	int GetCountSlot();
	void SetCountSlot(int slotCount);
	void AddSlot(SnackSlot* snackSlot);
	int GetEmptySlotsCount();

private:
	int _slotCount;
};

