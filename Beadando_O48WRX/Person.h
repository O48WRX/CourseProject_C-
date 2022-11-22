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
    ~Person();
    Person()
        : firstName{""}, lastName{""}, age{0}, salary{0} {}
    Person(std::string firstname, std::string lastname, int agenum, int salarynum)
        : firstName{firstname}, lastName{lastname}, age{agenum}, salary{salarynum} {};
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

    void print();

};

#endif // PERSON_H_INCLUDED
