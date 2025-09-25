//
// Created by Deb on 9/14/2025.
//

#include "DLL.h"
#include "DNode.h"
#include <cstdlib>
#include <iostream>
using std::cout;
using std::endl;
using std::string;

DLL::DLL() {
    first = nullptr;
    last = nullptr;
    ct = 0;
}
    
DLL::DLL(Task *newTask) {
    first =  new DNode(newTask);
    last = first;
    ct = 1;
}
/*********************************************************************/
/*  Start of student code                                            */
/*********************************************************************/
void DLL::push(Task *newTask) {
    /* (6 pts)
     *Write the push method, which creates a new DNode with the data
     *newTask, and adds the new node to the end of the list.
     *
     *This method should deal with the possibility that the list is an
     *empty list.
     *
     *This method should also increase the count of the number of nodes
     *in the list.
     */
}

void DLL::printForward() {
    /*(5 pts)
     *this method prints out the list in the order in which data was entered
     *(e.g., the first task to the last task, also known as First in, First out,
     *or FIFO)
     *
     *It uses the task field's printTask() method
     */
}

void DLL::printBackward() {
    /* (5 pts)
     * this method prints out the list from the last task entered back to
     * the first task entered.  This is also known as LIFO (Last in, first
     * out.  While this method is useful on its own, I also used it for
     * testing
     *
     * Again, it should use the task field's printTask() method.
     */
}


/********************************************************************/
/* Step 2                                                           */
/* Write the following 3 functions (findTask, changePriority, and
 * changeStatus. Test by using the appropriate options in the
 * Manager's Menu
 * *******************************************************************/
DNode *DLL::findTask(string taskdescr) {
    /* (6 pts)
     * write a method that searches through a list for the node with
     * taskdescr as its data.  Print the node's task (printTask()) and
     * return the node if it's found, print <taskdescr> not found and
     * return null otherwise
     */
}

void DLL::changePriority(string descr) {
    /* (3 pts)
     * this should be a short method that uses the findTask method to
     * find the appropriate node and then uses the task method
     * changePriority() to change a node's task's priority.  Test using
     * the appropriate menu option
     */
}

void DLL::changeStatus(string descr, bool status) {
    /* (3 pts)
     * Another short method that uses the findTask method to
 * find the appropriate node and then uses the task method
 * setCompleted(status) to change a node's task's status.
 * If the status is true,the task's completed field is set to true,
 * and if the status is false, the task's completed field is set
 * to false.
 */
}



/**********************************************************************
 * Step 3
 * Complete the following Methods.  You can test these using the
 * remove task options in the Manager menu.  These methods are also
 * helper methos for both the removeCompleted method and the sorting
 * methods
 */
DNode *DLL::removeFirst() {
    /* (4 pts)
     * this method removes the first node in a list and returns that node
     * It must reset the first pointer to point to the new first node.
     * It should also set the new first node's prev pointer to a nullptr,
     * and decrease the count of the number of nodes in the list
     */
}

DNode *DLL::pop() {
    /* write a method that removes the last node from the list and returns
     * it
     * If it is removing the last node in the list, it sets both the first
     * and the last pointers to nullptr and sets the count to 0.
     * Otherwise it resets the last pointer to point to the node
     * before the last node, makes the new last node's next field point to
     * a nullptr, and decreases the count of the nodes in the list
     */
}
DNode *DLL::removeThisNode(DNode *tmp) {
    /* (5 pts)
     * this method removes tmp from the list.  It assumes the node
     * being removed is neither the first node nor the last node
     * (you wrote other methods to take care of that).
     * (t decreases the count and returns the node
     */
}

DNode *DLL::removeTask(string taskdescr) {
    /* (4 pts)
     * This method finds the node whose task description matches taskdescr
     *(using findTask).  If the node to be removed is the first node,
     *this method calls removeFirst.  If the node to be removed is the
     *last node, this method calls pop.  Otherwise it calls removeThisNode.
     *It returns the node removed.
     */
}


/********************************************************************/
/* Step 4
 * Once you've written the 3 methods above that remove tasks from the
 * list, you can write and test the removeCompleted method as follows:
 */
void DLL::removeCompleted () {
    /* (5 pts)
     * this method traverses the list and removes all node whose task
     * completed field has been set to true (aka the task has been
     * completed.
     * It most definitely utilizes the methods you wrote in Step 3
     */
}

/******************************************************************/
/* Step 5
 *  Now we're writing a lot of insert methods.  These are largely
 *  helper functions so they're a bit hard to test right now.
 *****************************************************************/
void DLL::insertAtBeginning(DNode *node) {
    // (5 pts)
    // insert the node *node at the beginning of the list
    // It adjusts the pointers appropriately, and resets the first
    // pointer, as well as increasing the ct field
}

void DLL::push(DNode *node) {
    // (4 pts)
    // This is an overload of the push method, in which we push an actual
    // node onto the end of the list
    // If this is the first node being added to the list, it sets first to
    // point to this node as well as last.
    // It increases the ct field.
}
void DLL::insertHere(DNode *before, DNode *node) {
    /* (5 pts)
     * this method inserts the node right after the node before.
     * it increases the count field
     */
}

/********************************************************************
 *Step 6
 *Once you have all the insert and remove methods working, writing the
 *sort methods below should be relatively straightforward.
 *Once written, you can test using the appropriate menu options
 *********************************************************************/
void DLL::sortByPriority() {
    /* (12 pts)this method sorts the nodes based on the task's priority field.
     * When sorted, all the tasks with a priority of 1 will be first
     * in the list, followed by all the tasks with a priority of 2, then
     * all the tasks with a priority of 3
     * You can test this method using the appropriate menu option.
     */
}
void DLL::sortByTaskNum() {
    /* (8 pts)
     * this method sorts by the tasks' taskNum field.  This is the order
     * in which the tasks were originally entered.  You can't test this
     * until you have the sortByPriority method working.  Once that's
     * rearranged your nodes, you can then sort using this method.
     * It's also a menu option.
     */
}
/**********************************************************************/
/* Step 8
 * You're almost done!!!!  This is easy.  Write the destructor for the
 * DLL.
 * ********************************************************************/
DLL::~DLL() {
    /* (4 pts)
     * write the destructor for the DLL .  Just delete all the nodes
     * in the list.
     */
}













