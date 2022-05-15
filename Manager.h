#ifndef PERSON_MANAGER_H
#define PERSON_MANAGER_H


#include "Worker.h"

class Manager : public Worker {
    string dept;

public:
    Manager(const string &name, int year, double salary, const string &_dept);
    void print(ostream& os) const;
    string get_dept() const;
};


#endif //PERSON_MANAGER_H
