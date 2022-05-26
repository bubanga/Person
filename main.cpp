#include <iostream>
#include "Person.h"
#include "Worker.h"
#include "Manager.h"


int main() {
    Person **persons = new Person*[3];
    persons[0] = new Person("Jakub Gniecki", 2001);
    persons[1] = new Worker("Jerzy Nowak", 1999, 3050.43);
    persons[2] = new Manager("Mateusz Morawiecki", 1970, 19500.50, "Minister");
    for (int i = 0; i < 3; ++i) {
        std::cout << *persons[i] << std::endl;
        delete persons[i];
    }

    delete[] persons;

    return 0;
}


