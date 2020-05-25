//
// Created by Ramazan Cesur on 25/05/2020.
//

#ifndef UNTITLED_BANK_H
#define UNTITLED_BANK_H


#include "Base.h"

class Bank : public Base {
public:
    Bank(const std::string &name, const std::string &surname, int income = 250);

    virtual ~Bank();

    int getIncome() const;

    void setIncome(int income);

    void overridedMethod() override;

private:
    int income;
};


#endif //UNTITLED_BANK_H
