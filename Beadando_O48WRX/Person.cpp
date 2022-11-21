#include "Person.h"

Person::getAge() {
    return age;
}

Person::getFirstName() {
    return firstName;
}

Person::getLastName() {
    return lastName;
}

Person::getName() {
    return firstName + " " + lastName;
}

Person::getSalary() {
    return salary;
}

Person::setName(string fullname) {
    name = fullname;
}

Person::setAge(int agenumber) {
    age = agenumber;
}

Person::setFirstName(string firstname) {
    firstName = firstname;
}

Person::setLastName(string lastname) {
    lastName = lastname;
}

Person::setSalary(int salarynumber) {
    salary = salarynumber;
}
