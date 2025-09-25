//
// Created by Deb on 9/11/2025.
//

#include "Task.h"
#include <ctime>
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::stoi;
using std::getline;

int Task::totalNumOfTasks = 0;

Task::Task() {
    cout << "Enter Task: " << " " << endl;
    getline(cin, description);
    cout << description << endl;
    taskNum = totalNumOfTasks++;
    assignedPerson = "Not Assigned";
    cout << "Priority (1(highest), 2, or 3 (lowest)) : " << endl;
    string priostring;
    getline(cin,priostring);
    priority = stoi(priostring);
    time(&timeStamp);
    cout << ctime(&timeStamp) << endl;
    completed = false;
}
Task::Task(string desc, int prio, string person) {
    description = desc;
    taskNum = totalNumOfTasks++;
    assignedPerson = person;
    priority = prio;
    time(&timeStamp);
    completed = false;
}

void Task::assignPerson() {
    cout << description << endl;
    cout << "Who will be doing this task? " << endl;
    getline(cin, assignedPerson);
    printTask();
}
void Task::setCompleted(bool status) {
    completed = status;
}

void Task::changePriority() {
    cout << description << endl;
    cout << "Priority is currently: " << priority << endl;
    cout << "Change priority to: ";
    string priostring;
    getline(cin,priostring);
    priority = stoi(priostring);
    cout << "Priority is now " << priority << endl;
}
void Task::printTask() {
    cout << taskNum << ": ";
    cout << description << endl;
    cout << assignedPerson << ": Priority: " << priority << ", Completed: ";
    if (completed) cout <<"Done" <<  endl;
    else cout <<"Not Done" <<  endl;
    cout << ctime(&timeStamp);
    cout << "******************************************************" << endl;
}
