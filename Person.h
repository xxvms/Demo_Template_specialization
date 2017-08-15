//
// Created by tombr on 15/08/2017.
//

#ifndef DEMO_TEMPLATE_SPECIALIZATION_PERSON_H
#define DEMO_TEMPLATE_SPECIALIZATION_PERSON_H

#include <string>

class Person {
private:
    std::string first_name;
    std::string last_name;
    int arbitrary_number;
public:
    Person(std::string first, std::string last, int arbitraty);
    ~Person();
    std::string Get_name();
    int Get_number() { return  arbitrary_number; }
    void Set_number(int number) { arbitrary_number = number; }
    bool operator< (Person& p);
    bool operator< (int i);

};
bool operator<(int i, Person& p);



#endif //DEMO_TEMPLATE_SPECIALIZATION_PERSON_H
