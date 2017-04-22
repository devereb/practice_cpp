//
// Created by Brent Devereaux on 2017-04-21.
//

#include "FirstClass.h"
#include <iostream>

using namespace std;

void FirstClass::myFunction() {
    cout << "This is a printout from my function." << endl;
}

void FirstClass::setANumber(int numberToSet) {
    this->justANumber = numberToSet;
}

int FirstClass::getANumber() {
    return this->justANumber;
}
