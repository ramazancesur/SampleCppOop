//
// Created by Ramazan Cesur on 25/05/2020.
//

#include <iostream>
#include "Bank.h"

using namespace std;

Bank::~Bank() {
    std::cout << "bank class is distroy" << endl;
}

int Bank::getIncome() const {
    return income;
}

void Bank::setIncome(int income) {
    Bank::income = income;
}

Bank::Bank(const string &name, const string &surname, int income) : Base(name, surname), income(income) {
    cout << "bank class is generate " << endl;
    setIncome(income);
}

void Bank::overridedMethod() {
    cout << "method override Call" << endl;
}
