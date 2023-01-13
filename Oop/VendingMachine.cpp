#include "VendingMachine.h"
#include "SnackSlot.h"

VendingMachine::VendingMachine(int slotCount)
{
	_slotCount = slotCount;
}

int VendingMachine::GetEmptySlotsCount()
{
	return _slotCount;
}

int VendingMachine::GetCountSlot()
{
	return _slotCount;
}

void VendingMachine::SetCountSlot(int slotCount)
{
	_slotCount = slotCount;
}

void VendingMachine::AddSlot(SnackSlot* snackSlot)
{
	_slotCount--;
}
