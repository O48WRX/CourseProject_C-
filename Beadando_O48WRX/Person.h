#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <string>

class Person {
private:
    std::string firstName;
    std::string lastName;
    int age;
    int salary;

public:
    Person() {}
    Person(std::string firstname, std::string lastname, int age, int salary) {};
    Person(std::string name, int age, int salary) {};
    std::string getName();
    void setName(std::string fullname);
    std::string getFirstName();
    void setFirstName(std::string firstname);
    std::string getLastName();
    void setLastName(std::string lastname);
    int getAge();
    void setAge(int agenumber);
    int getSalary();
    void setSalary(int salarynumber);

};

#endif // PERSON_H_INCLUDED
