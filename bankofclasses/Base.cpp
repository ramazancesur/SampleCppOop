//
// Created by Ramazan Cesur on 25/05/2020.
//

#include "Base.h"


#include <iostream>

#include <sstream>

using namespace std;

Base::Base(const std::string &name, const std::string &surname) : name(name), surname(surname) {
    stringstream ss;
    setName(name);
    setSurname(surname);
    ss.str("name= " + getName() + " surname= " + getSurname());
    cout << "base class on load with overloading method " << ss.str() << endl;
}

Base::Base() {
    cout << "base class on load";
}

const std::string &Base::getName() const {
    return name;
}

void Base::setName(const std::string &name) {
    Base::name = name;
}

const std::string &Base::getSurname() const {
    return surname;
}

void Base::setSurname(const std::string &surname) {
    Base::surname = surname;
}

Base::~Base() {
    cout << "base constracture have been created" << endl;
}
