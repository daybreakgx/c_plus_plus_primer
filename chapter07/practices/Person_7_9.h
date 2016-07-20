#ifndef PERSON_H
#define PERSON_H

#include <string>

struct Person {
    std::string name;
    std::string address;

    std::string getName() const { return name; }
    std::string getAddr() const { return address; }
    
};


std::istream& read(std::istream& is, Person& p) {
    is >> p.name >> p.address;
    return is;
}

std::ostream& print(std::ostream& os, Person& p) {
    os << p.name << " " << p.address << std::endl;
    return os;
}
#endif
