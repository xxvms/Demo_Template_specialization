//
// Created by tombr on 15/08/2017.
//

#ifndef DEMO_TEMPLATE_SPECIALIZATION_ACCUM_H
#define DEMO_TEMPLATE_SPECIALIZATION_ACCUM_H

#include "Person.h"

template <class T>
class Accum {
private:
    T total;
public:
    Accum(T start) : total(start){}
    T operator += (const T& t) { return total = total + t; }
    T GetTotal() {return total;}

};

template <> // this is template specialization!!!!
class  Accum<Person>
{
private:
    int total;
public:
    Accum(int start) : total(start){}
    int operator +=  (Person& t) { return  total += t.Get_number(); }
    int GetTotal() { return total; }
};

#endif //DEMO_TEMPLATE_SPECIALIZATION_ACCUM_H
