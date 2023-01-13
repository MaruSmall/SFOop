#include <iostream>
#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int slotCount = 0;
	cout << "Введите количество слотов для снеков" << endl;
	cin >> slotCount;

	Snack* bounty = new Snack("Bounty", 50);
	Snack* snickers = new Snack("Snickers");

	SnackSlot* slot = new SnackSlot(10/*количество батончиков, которые помещаются в слот*/);
	slot->AddSnack(bounty); //Добавляем батончик в слот
	slot->AddSnack(snickers);

	VendingMachine* machine = new VendingMachine(slotCount /*Количество слотов для снеков*/);
	machine->AddSlot(slot); // Помещаем слот обратно в аппарат
	cout << machine->GetEmptySlotsCount(); // Должно выводить количество пустых слотов для снеков

	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
}


