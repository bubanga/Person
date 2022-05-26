#ifndef PERSON_MANAGER_H
#define PERSON_MANAGER_H


#include "Worker.h"

class Manager : public Worker {
    string dept;

public:
    explicit Manager(const string &name, int year, double salary, const string &_dept);
    void print(ostream& os) const override;
    ~Manager() override = default;
    string get_dept() const;
};


#endif //PERSON_MANAGER_H
