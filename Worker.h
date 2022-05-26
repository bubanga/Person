#ifndef PERSON_WORKER_H
#define PERSON_WORKER_H


#include "Person.h"

class Worker : public Person {

protected:
    double salary;

public:
    explicit Worker(const string &name, int year, double _salary);
    void print(ostream& os) const override;
    ~Worker() override = default;
    double get_salary() const;
};

#endif //PERSON_WORKER_H
