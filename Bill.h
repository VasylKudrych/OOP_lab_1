
// Bill.h

#include <iostream>

using namespace std;

#pragma once

class Bill {
private:
    int unsigned first;
    int unsigned second;
    double cost();
    bool isValidInput(int value);
    bool isValidInput(int minutes, int price);

public:
    bool init(int minutes, int price);

    void read();

    void display();

    int unsigned getFirst();
    void setFirst(int sense);

    int unsigned getSecound();
    void setSecound(int sense);
};
