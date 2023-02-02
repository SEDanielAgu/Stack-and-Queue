//
// Created by Daniel Agu on 11/3/2020.
//

#ifndef STACK_AND_QUEUE_TEMPLATE_TESTRUNNER_H
#define STACK_AND_QUEUE_TEMPLATE_TESTRUNNER_H

#include "Stack.h"
#include "Queue.h"

class TestRunner {
public:
    void runTest();

private:
    Stack stack;
    Queue queue;
};
#endif //STACK_AND_QUEUE_TEMPLATE_TESTRUNNER_H
