#include <iostream>
#include "Person.cpp"

using namespace std;

int main()
{
    cout << "Person oszt�ly" << endl;
    Person p = Person("Teszt", "Elek", 19, 1500);
    p.print();
    return 0;
}
