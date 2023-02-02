//
// Created by Daniel Agu on 11/3/2020.
//

#include "Stack.h"

void Stack::push(string input) {
    //sends the next action added to the top tof the stack
    LinkedListItem* action = new LinkedListItem(input);
    addItemToFront(action);
}

LinkedListItem* Stack::pop() {
    //removes the first item from the top of the stack
    return removeFirstItem();
}


