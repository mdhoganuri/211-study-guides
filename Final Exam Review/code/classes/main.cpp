#include <iostream>
#include "Date.h"

int main () {
    // Create a new 'Date' object.
    Date may_fourth;

    // Print the current date held by the 'may_fourth' object.
    may_fourth.print();

    // Set the date held by the 'may_fourth' object to May 4, 2023.
    may_fourth.set(5, 4, 2023);

    // Print the current date held by the 'may_fourth' object.
    may_fourth.print();

    return 0;
}