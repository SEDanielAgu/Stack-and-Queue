//
// Created by Daniel Agu on 10/20/2020.
//

#ifndef PROJECT_1_DOUBLY_LINKED_LIST_CS2337DANIELAGU_LINKEDLISTITEM_H
#define PROJECT_1_DOUBLY_LINKED_LIST_CS2337DANIELAGU_LINKEDLISTITEM_H



#include <iostream>
#include "string"

using namespace std;

class LinkedListItem {
public:
    LinkedListItem(string a);

    string getItem();
    LinkedListItem* getNextItem();
    LinkedListItem* getPreviousItem();

    void setNextItem(LinkedListItem* newItem);
    void setPrevItem(LinkedListItem* newItem);

    void printInfo();

private:
    string data;
    LinkedListItem* next;
    LinkedListItem* prev;
};

#endif //PROJECT_1_DOUBLY_LINKED_LIST_CS2337DANIELAGU_LINKEDLISTITEM_H