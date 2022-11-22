#include <iostream>
#include "Person.cpp"
#include "book.cpp"

using namespace std;

int main()
{
    cout << "Person osztály" << endl;
    Person p = Person("Teszt", "Elek", 19, 1500);
    p.print();
    cout<< "********************************" << endl;
    cout << "int pointerezés" << endl;

    int n1 = 5;
    int n2 = 3;
    int *p1 = &n1;
    int *p2 = &n2;
    p1 = p2;

    cout << "p1 erteke: " << *p1 << endl;
    cout << endl;
    cout<< "********************************" << endl;
    cout << "Book osztaly" << endl;

    Book b = Book("Gyuruk ura", 74832);
    b.print();

    cout << "********************************" << endl;
    cout << "Ciklusok" << endl;

    int ciklusFutas = 3;
    int whileCycle = 3;
    bool cycleBool = true;

    for(int i = 0; i < ciklusFutas; i++) {
        cout<< "Ez egy for ciklus" << endl;
    }

    while(cycleBool) {
        cout << "Ez egy while ciklus" << endl;
        if(whileCycle == 0) {
            cycleBool = false;
        }
        whileCycle--;
    }

    whileCycle = 3;
    cycleBool = true;

    do {
        cout << "Ez egy do-while ciklus" << endl;
        if(whileCycle == 0) {
            cycleBool = false;
        }
        whileCycle--;
    } while (cycleBool);

    return 0;
}
