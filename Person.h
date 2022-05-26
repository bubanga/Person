#ifndef PERSON_PERSON_H
#define PERSON_PERSON_H
#include <iostream>

using namespace std;

class Person {
protected:
    string name;
    int year_of_birth;

public:
    explicit Person(const string& _name, int _year);
    virtual void print(ostream& os) const;
    virtual ~Person() = default;
};

ostream& operator<<(ostream& os, const Person& o);
#endif //PERSON_PERSON_H
