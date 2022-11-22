#include "Person.h"

int Person::getAge() {
    return age;
}

std::string Person::getFirstName() {
    return firstName;
}

std::string Person::getLastName() {
    return lastName;
}

std::string Person::getName() {
    return firstName + " " + lastName;
}

int Person::getSalary() {
    return salary;
}

void Person::setName(std::string fullname) {
    Person::setFirstName(fullname.substr(0, fullname.find(" ")));
    Person::setLastName(fullname.substr(1, fullname.find(" ")));
}

void Person::setAge(int agenumber) {
    age = agenumber;
}

void Person::setFirstName(std::string firstname) {
    firstName = firstname;
}

void Person::setLastName(std::string lastname) {
    lastName = lastname;
}

void Person::setSalary(int salarynumber) {
    salary = salarynumber;
}
