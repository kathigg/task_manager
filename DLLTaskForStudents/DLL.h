//
// Created by Deb on 9/14/2025.
//

#ifndef DLL_H
#define DLL_H
#include "DNode.h"


class DLL {
    DNode* first;
    DNode *last;
    int ct;


public:
    DLL();
    DLL(Task *newTask);
    /* Step 1: writhe the 3 methods below.
     * Instructions are in DLL.cpp
     * test by running, using the menu options
     * for adding a task and printing the list
     */
    void push(Task *newtask);
    void printForward();
    void printBackward();

    /* Step 2:  Write the 3 methods below.
     * Instructions are in DLL.cpp
     * Test by running, using the menu options in
     * Manager.cpp (Note that changePriority and
     * changeStatus use findTask)
     */
    DNode *findTask(string taskdescr);
    void changePriority(string descr);
    void changeStatus(string descr, bool status);

    /**********************************************************************
     * Step 3
     * Complete the following Methods.  You can test these using the
     * remove task options in the Manager menu.  These methods are also
     * helper methos for both the removeCompleted method and the sorting
     * methods
     */
    DNode *removeTask(string taskdescr);
    DNode *removeThisNode(DNode *tmp);
    DNode *removeFirst();
    Task *pop();

    /********************************************************************/
    /* Step 4
     * Once you've written the 3 methods above that remove tasks from the
     * list, you can write and test the removeCompleted method as follows:
     */
    void removeCompleted();

    void push(DNode *node);
    void insertAtBeginning(DNode *node);
    void insertHere(DNode *before, DNode *node);

    void sortByPriority();
    void sortByTaskNum();
    ~DLL();
};



#endif //DLL_H
