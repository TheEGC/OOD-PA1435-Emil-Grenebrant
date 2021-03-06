#ifndef IITEM_H
#define IITEM_H
#define ITEM_ARMOR_DR 20
#define ITEM_WEAPON_DR 20
#define ITEM_HPPOT_DR 60

#include <cstdlib>
#include <iostream>
#include <string>

enum ITEM { ARMOR, WEAPON, HPPOT };

class IItem
{
public:
	virtual ~IItem() {};

	virtual void display() = 0;
	virtual std::string getString() = 0;
	virtual ITEM getItemType() = 0;
	virtual int getPower() = 0;
};

#endif
