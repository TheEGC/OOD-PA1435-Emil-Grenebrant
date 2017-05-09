#pragma once
#ifndef IINVENTORY_H
#define IINVENTORY_H

#include "IItem.h"
#include <string>

class IInventory
{
public:
	virtual ~IInventory() {};

	virtual void equip(std::string choice) = 0;
	virtual void getGear(std::string choice) = 0;
	virtual void use(std::string choice) = 0;
	virtual bool isItem(std::string choice) = 0;
	virtual void inventory() = 0;
};

#endif