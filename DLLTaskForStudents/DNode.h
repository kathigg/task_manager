// Coded by Kathleen Higgins and Aastha Desai, 9/26/2025
//
// Created by Deb on 9/14/2025.
//

#ifndef DNODE_H
#define DNODE_H


#include <iostream>
#include "Task.h"
using namespace std;

class DNode {
friend class DLL;
    Task *task;
    DNode* prev;
    DNode* next;
public:
    DNode();
    DNode(Task *newTask);
    void printNode();
    ~DNode();
};





#endif //DNODE_H
