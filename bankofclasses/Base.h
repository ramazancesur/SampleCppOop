//
// Created by Ramazan Cesur on 25/05/2020.
//

#ifndef UNTITLED_BASE_H
#define UNTITLED_BASE_H


#include <string>

class Base {
public:
    Base(const std::string &name, const std::string &surname);

    Base();

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getSurname() const;

    void setSurname(const std::string &surname);

    virtual ~Base();

    virtual void overridedMethod() = 0;

private:
    std::string name = "aaa";
    std::string surname = "aaa";
};


#endif //UNTITLED_BASE_H
