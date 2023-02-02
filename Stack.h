//
// Created by Daniel Agu on 11/3/2020.
//

#ifndef STACK_AND_QUEUE_TEMPLATE_STACK_H
#define STACK_AND_QUEUE_TEMPLATE_STACK_H

#include "LinkedList.h"

class Stack: public LinkedList {
public:
    void push(string input);
    LinkedListItem* pop();
};
#endif //STACK_AND_QUEUE_TEMPLATE_STACK_H
