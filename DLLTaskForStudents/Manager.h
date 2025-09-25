//
// Created by Deb on 9/14/2025.
//

#ifndef MANAGER_H
#define MANAGER_H
#include "DLL.h"
#include "DNode.h"
#include "Task.h"
#include <cstdlib>
using std::string;


class Manager {
    DLL *taskList;
    bool readFromFile;
    string filename;
public:
    Manager();
    Manager(bool rFF);
    Manager(string fname, bool rFF);
    void Menu();
};



#endif //MANAGER_H
