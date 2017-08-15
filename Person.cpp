//
// Created by tombr on 15/08/2017.
//

#include "Person.h"
Person::Person(std::string first, std::string last, int arbitrary): first_name(first), last_name(last), arbitrary_number(arbitrary) {}
Person::~Person() {}
std::string Person::Get_name() {
    return first_name + " " + last_name;
}
bool Person::operator<(Person& p) {
    return arbitrary_number < p.arbitrary_number;
}
bool Person::operator<(int i) {
    return arbitrary_number < i;
}
bool operator< (int i, Person& p) {
    return i < p.Get_number();
}