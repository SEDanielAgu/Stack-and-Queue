//
// Created by Daniel Agu on 11/3/2020.
//

#include "Queue.h"

void Queue::queue(string input) {
    //adds the next action to the back of the queue
    LinkedListItem* action = new LinkedListItem(input);
    addItemToBack(action);
}

LinkedListItem* Queue::deQueue() {
   //removes the first action from the top of the queue
    return removeFirstItem();
}



