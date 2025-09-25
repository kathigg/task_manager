//
// Created by Deb on 9/14/2025.
//

#include "Manager.h"
#include "DLL.h"
#include "DNode.h"
#include "Task.h"
#include <cstdlib>
using std::string;
using std::cout;
using std::endl;
using std::cin;



Manager::Manager() {
    taskList = new DLL();
    readFromFile = false;
    filename = "";
    Menu();
}
Manager::Manager(bool rFF) {
    taskList = new DLL();
    readFromFile = rFF;
    filename = "ListofTasks.txt";
    Menu();
}
Manager::Manager(string fname, bool rFF) {
    taskList = new DLL();
    readFromFile = rFF;
    filename = fname;
    Menu();
}
void Manager:: Menu() {
    bool modify = true;
    string choice;
    while (modify) {
        cout << "1. Add Task" << endl;
        cout << "2. Print Forward" << endl;
        cout << "3. Print Backward" << endl;
        cout << "4. Find Task" << endl;
        cout << "5. Change a Task's Priority" << endl;
        cout << "6. Change a Task's Status (completed or not completed)" << endl;
        cout << "7. Remove Task" << endl;
        cout << "8. Remove Completed Tasks" << endl;
        cout << "9. Sort by Priority" << endl;
        cout << "10. Sort by Task Number (order of entry)" << endl;
        cout << "11. Exit" << endl;

        getline(cin, choice);

        if (choice == "1") {
            string task;
            string priost;
            int prio;
            string person;
            cout << "Enter task" << endl;
            getline(cin, task);
            cout << "Enter Priority" << endl;
            getline(cin, priost);
            prio = stoi(priost);
            cout << "Who will be doing this task?" << endl;
            getline(cin, person);
            Task *tmpTask = new Task(task, prio, person);
            taskList->push(tmpTask);
            taskList->printForward();
        }
        else if (choice == "2") {
            taskList->printForward();
        }
        else if (choice == "3") {
            taskList->printBackward();
        }
        else if (choice == "4") {
            string taskstr;
            cout << "Enter task to find" << endl;
            getline(cin, taskstr);
            taskList->findTask(taskstr);
        }
        else if (choice == "5") {
            string taskstr;
            cout << "Enter task" << endl;
            getline(cin, taskstr);
            taskList->changePriority(taskstr);
        }
        else if (choice == "6") {
            string taskstr;
            cout << "Enter task" << endl;
            getline(cin, taskstr);
            cout << "Completed? (yes or no): " << endl;
            string complete;
            getline(cin, complete);
            if (complete == "yes") {
                taskList->changeStatus(taskstr,true);
            }
            else {
                taskList->changeStatus(taskstr,true);
            }
        }
        else if (choice == "7") {
            string taskstr;
            cout << "Enter task" << endl;
            getline(cin, taskstr);
            taskList->removeTask(taskstr);
            taskList->printForward();
        }

        else if (choice == "8") {
            taskList->removeCompleted();
            cout << "List (with completed tasks removed): " << endl;
            taskList->printForward();
        }

        else if (choice == "9") {
            taskList->sortByPriority();
            cout << "Printing List (Sorted by Priority): " << endl;
            taskList->printForward();
            cout << endl << endl << "For testing purposes, printing backwards " << endl;
            taskList->printBackward();
        }
        else if (choice == "10") {
            taskList->sortByTaskNum();
            cout << "Printing List (Sorted by Task Num): " << endl;
            taskList->printForward();
            cout << endl << endl << "For testing purposes, printing backwards " << endl;
            taskList->printBackward();
        }
        else if (choice == "11" ) modify = false;
    }
    return;
}