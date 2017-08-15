#include <iostream>
#include "Accum.h"
#include "Person.h"

int main() {

    Accum<int> integers(0);
    integers += 3;
    integers += 7;
    std::cout << integers.GetTotal() << '\n';

    Accum<std::string> strings("");
    strings += "hello";
    strings += " world";

    std::cout << strings.GetTotal() << '\n';


    //Person start("", "", 0);
    Accum<Person> people(0);
    Person p1("Kate", "Gregory", 123);
    Person p2("John", "Snow", 456);
    people += p1;
    people += p2;

    std::cout << people.GetTotal() << '\n';

    return 0;
}