#ifndef PERSON_WORKER_H
#define PERSON_WORKER_H


#include "Person.h"

class Worker : public Person {

protected:
    double salary;

public:
    Worker(const string &name, int year, double _salary);
    void print(ostream& os) const;
    double get_salary() const;
};

#endif //PERSON_WORKER_H
