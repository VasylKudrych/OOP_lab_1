
// OOP_lab_1.cpp

#include <iostream>
#include "Bill.h"

using namespace std;


Bill makeBill(int minutes, int price) {
    Bill bill;

    if (bill.init(minutes, price))
    {
        return bill;
    }

}

int main() {
    Bill bill;
    bill = makeBill(5, 6);

    bill.display();

    bill.read();
    bill.display();
    bool isValidInput(int value);
    bool isValidInput(int minutes, int price);

    return 0;
}


