// Coded by Kathleen Higgins and Aastha Desai, 9/26/2025
//
// Created by Deb on 9/11/2025.
//

#ifndef TASK_H
#define TASK_H
#include <iostream>
#include <string>
#include <ctime>
using std::string;


class Task {
    friend class DNode;
    friend class DLL;
    string description;
    int priority;     // 1 = High, 2 = Medium, 3 = Low
    time_t timeStamp;
    int taskNum;
    string assignedPerson;
    static int totalNumOfTasks;
    bool completed;

public:
    Task();
    Task(string desc, int prio, string person);
    void setCompleted(bool status);
    void assignPerson();
    void changePriority();
    void printTask();
};

#endif //TASK_H
