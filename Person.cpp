#include "Person.h"

Person::Person(const string &_name, int _year) {
    this->name = _name;
    this->year_of_birth = _year;
}

void Person::print(ostream &os) const {
    os << "Name: " << this->name << endl;
    os << "Year of brith: " << this->year_of_birth << endl;
}

ostream& operator<<(ostream& os, const Person& o) {
    o.print(os);
    return os;
}