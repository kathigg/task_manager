// Coded by Kathleen Higgins and Aastha Desai, 9/26/2025
//
// Created by Deb on 9/14/2025.
//

#include "DNode.h"
#include "Task.h"

DNode::DNode() {
    prev = NULL;
    next  = NULL;
    task = NULL;
}

DNode::DNode(Task *newTask) {
    task = newTask;
    next = NULL;
    prev = NULL;
}
void DNode::printNode() {
    task->printTask();
}
DNode::~DNode() {
    if (task != NULL) {
        cout << "Deleting ";
        task->printTask();
        delete task;
    }
}