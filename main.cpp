#include <iostream>
#include "Person.h"
#include "Worker.h"
#include "Manager.h"


int main() {
    Person p = Person("Jakub Gniecki", 2001);
    Worker w = Worker("Jerzy Nowak", 1999, 3050.43);
    Manager m = Manager("Mateusz Morawiecki", 1970, 19500.50, "Minister");
    std::cout << p << std::endl;
    std::cout << w << std::endl;
    std::cout << m << std::endl;
    return 0;
}


