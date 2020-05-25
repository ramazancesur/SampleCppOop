#include <iostream>
#include "bankofclasses/Bank.h"


using namespace std;

int main() {
    Base *cesurBank = new Bank("ramazan", "cesur");
    cout << cesurBank->getName() << endl;
    cout << "base class is create" << endl;
    delete cesurBank;
    cout << "cesur bank object delete";
    return 0;
}

