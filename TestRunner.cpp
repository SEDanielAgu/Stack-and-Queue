//
// Created by Daniel Agu on 11/3/2020.
//

#include "TestRunner.h"
#include <iostream>
#include "string"

void TestRunner::runTest() {
    LinkedList printStack; //used for printing the order of the stack
    LinkedList printQueue; //used for printing the order of the queue
    int timeStamp;
    int checkStamp = 0; //used for adding the corresponding timestamps in the right order to the stack/queue
    int itemNumber; //used to keep track of how many lines are left
    std::string action;
    std::cin >> itemNumber;
    std::cin >> timeStamp;
    while (itemNumber != 0 || (stack.getLength() != 0 && queue.getLength() != 0)) { //makes sure the loop stops if the stack/queue is empty or there are nor more actions
        while (timeStamp == checkStamp) {
            std::getline(cin, action);
            itemNumber--;
            stack.push(action); //adds action to the stack/queue
            queue.queue(action);
            if (itemNumber != 0) { //as long as there are actions left the loop continues if the same timestamps are back to back
                std::cin >> timeStamp;
            }
            else {
                checkStamp = -10; //exits the loop
            }
        }
        if (stack.getLength() != 0 && queue.getLength() != 0) {  //if there are items in the stack/queue they get removed in the right order
            printStack.addItemToBack(stack.pop());
            printQueue.addItemToBack(queue.deQueue());
        }
        checkStamp++;
    }
    std::cout << "Stack process order:" << std::endl;
    printStack.printList();
    std::cout << "Queue process order:" << std::endl;
    printQueue.printList();
}

