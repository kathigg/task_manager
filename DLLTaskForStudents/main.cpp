#include <iostream>

#include "Manager.h"
#include "Task.h"
using std::cout;
using std::endl;

int main() {
    // Task *newTask = new Task();
    // newTask->printTask();
    // Task *newTask2 = new Task("Finish Project",1,"Debbie" );
    // newTask2->printTask();
    // newTask->assignPerson();
    // newTask->setCompleted(true);
    // newTask->changePriority();
    // newTask->printTask();
    Manager *newManager = new Manager();
/*
        DoublyLinkedList dll;
        int choice, value, key;

        cout << "\nMenu:\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert After Node\n";
        cout << "4. Delete from Start\n";
        cout << "5. Delete from End\n";
        cout << "6. Display\n";
        cout << "7. Exit\n";

        while (true) {
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Enter value: ";
                cin >> value;
                dll.insertAtBeginning(value);
                break;
                case 2:
                    cout << "Enter value: ";
                cin >> value;
                dll.insertAtEnd(value);
                break;
                case 3:
                    cout << "Enter key (after which to insert): ";
                cin >> key;
                cout << "Enter value: ";
                cin >> value;
                dll.insertAfter(key, value);
                break;
                case 4:
                    dll.deleteFromStart();
                break;
                case 5:
                    dll.deleteFromEnd();
                break;
                case 6:
                    dll.display();
                break;
                case 7:
                    cout << "Exiting...\n";
                return 0;
                default:
                    cout << "Invalid choice.\n";
            }
        }
        return 0;
    }
    */
    return 0;
}
