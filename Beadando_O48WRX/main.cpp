#include <iostream>
#include "Person.cpp"
#include "book.cpp"

using namespace std;

void sayHello() {
    cout << "Hello" << endl;
}

int return1() {
    return 1;
}

void powerOf2(int * number) {
    int tempnum = *number * *number;
    *number = tempnum;
}

int main()
{
    cout << "Person osztaly" << endl;
    Person p = Person("Teszt", "Elek", 19, 1500);
    p.print();
    cout<< "********************************" << endl;
    cout << "Pointerek" << endl;

    const int  cint = 12;
    int const *ptr1 = &cint;
    int const * const cptr = &cint;

    cout <<  "Konstans int: " <<cint<< endl;

    cout<< "Pointer: " <<  *ptr1 << endl;
    cout << "Konstans pointer: " << *cptr << endl;

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

    cout << "*********************************************" << endl;
    cout << "Fuggvenyek" << endl;

    sayHello();
    int testnum = 5;
    int * testpointer = &testnum;
    powerOf2(testpointer);
    cout << "Fuggveny valtoztatott ertek: " << *testpointer << endl;


    cout << endl;
    cout << return1() << endl;

    return 0;
}
