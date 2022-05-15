#include "Manager.h"

Manager::Manager(const string &_name, int _year, double _salary, const string &_dept) : Worker(_name, _year, _salary) {
    this->dept = _dept;
}

void Manager::print(ostream &os) const {
    Worker::print(os);
    os << "Dept: " << this->get_dept() << endl;
}

string Manager::get_dept() const {
    return this->dept;
}
