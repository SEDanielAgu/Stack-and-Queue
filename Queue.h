//
// Created by Daniel Agu on 11/3/2020.
//

#ifndef STACK_AND_QUEUE_TEMPLATE_QUEUE_H
#define STACK_AND_QUEUE_TEMPLATE_QUEUE_H

#include "LinkedList.h"

class Queue: public LinkedList {
public:
    void queue(string input);
    LinkedListItem* deQueue();
};
#endif //STACK_AND_QUEUE_TEMPLATE_QUEUE_H
