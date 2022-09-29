
// Bill.cpp

#include "Bill.h"
#include <cmath>

bool Bill::isValidInput(int sense) {
    return sense > 0;
}


bool Bill::isValidInput(int minutes, int price) {
    return (minutes >= 0) && (price >= 0);
}

bool Bill::init(int minutes, int price) {

    if (this->isValidInput(minutes, price)) {
        this->first = minutes;
        this->second = price;

        return true;
    }

    cout << "Invalid data: received negative or zero value(-s)" << endl;
    return false;
}

void Bill::read()
{
    int unsigned minutes;
    int unsigned price;

    do
    {
        cout << "Input value:" << endl;
        cout << "minutes = "; cin >> minutes;
        cout << "price = "; cin >> price;
        cout << endl;
    } while (!init(minutes, price));
}

void Bill::display() {
    if (!isValidInput(this->first, this->second)) {
        cout << "Invalid data: received negative or zero value(-s)" << endl;

        return;
    }

    printf("minutes = %i\n", this->first);
    printf("price = %i\n", this->second);
    printf("cost = %.3f\n\n", this->cost());
}

int unsigned Bill::getFirst() {
    return this->first;
}

void Bill::setFirst(int sense) {
    if (this->isValidInput(sense)) {
        this->first = sense;

        return;
    }

    cout << "Invalid data: received negative or zero value(-s)" << endl;
}

int unsigned Bill::getSecound() {
    return this->second;
}

void Bill::setSecound(int sense) {
    if (this->isValidInput(sense)) {
        this->second = sense;

        return;
    }

    cout << "Invalid data: received negative or zero value(-s)" << endl;
}

double Bill::cost() {
    return this->first * this->second;
}