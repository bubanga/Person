#include "Worker.h"

Worker::Worker(const string &_name, int _year, double _salary) : Person(_name, _year) {
    this->salary = _salary;
}

void Worker::print(ostream & os) const {
    Person::print(os);
    os << "Salary: " << this->get_salary() << " PLN" << endl;
}

double Worker::get_salary() const {
    return this->salary;
}
