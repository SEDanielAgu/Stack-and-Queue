//
// Created by Daniel Agu on 10/20/2020.
//

#include <iostream>
#include "LinkedListItem.h"
#include "string"

using namespace std;

LinkedListItem::LinkedListItem(string a) {
    data = a;
}

string LinkedListItem::getItem() {
    return data;
}

LinkedListItem* LinkedListItem::getNextItem() {
    return next;
}

LinkedListItem* LinkedListItem::getPreviousItem() {
    return prev;
}

void LinkedListItem::setNextItem(LinkedListItem *newItem) {
    next = newItem;
}

void LinkedListItem::setPrevItem(LinkedListItem *newItem) {
    prev = newItem;
}

void LinkedListItem::printInfo() {
    cout << data << endl;
}

