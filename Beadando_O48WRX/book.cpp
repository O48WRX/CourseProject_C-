#include "book.hpp"

Book::Book(std::string title, int serialNumber) {
    title_m = title;
    serialNumber_m = serialNumber;
}

void Book::print() {
    std::cout << "C�m: " << title_m << " " << "Kiadvany szama: " << serialNumber_m << std::endl;
}
