#ifndef BOOK_HPP_INCLUDED
#define BOOK_HPP_INCLUDED

class Book {
public:
    std::string title_m;
    int serialNumber_m;

    Book(std::string title, int serialNumber);
    void print();
};

#endif // BOOK_HPP_INCLUDED
