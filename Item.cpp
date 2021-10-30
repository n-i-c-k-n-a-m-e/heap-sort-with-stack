// item.cpp
#include "Item.h"

Item::Item(Item* prevItem, int newValue) { //+2
    previous = prevItem; //+1
    value = newValue;  //+1
}

Item* Item::getPrevious() {
    return previous;
}

void Item::setPrevious(Item* prevItem) {	//+2
    previous = prevItem;
}

int Item::getValue() {
    return value;
}

void Item::setValue(int newValue) {	//+2
    value = newValue;
}

int& Item::getValueAddress() {
    return value;
}
	//+4