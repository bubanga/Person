#ifndef PERSON_PERSON_H
#define PERSON_PERSON_H
#include <iostream>

using namespace std;

class Person {
protected:
    string name;
    int year_of_birth;

public:
    Person(const string& _name, int _year);
    virtual void print(ostream& os) const;
};

ostream& operator<<(ostream& os, const Person& o);
#endif //PERSON_PERSON_H
