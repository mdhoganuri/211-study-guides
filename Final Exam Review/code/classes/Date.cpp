#include <iostream>
#include "Date.h"

// Default constructor; notice that the constructor has no type - you're making your own type!
Date::Date () {
    month = 1;
    day = 1;
    year = 2000;
}

// Parameterized constructor; the 'this' keyword can help keep parameters readable.
Date::Date (int month, int day, int year) {
    this->month = month;
    this->day = day;
    this->year = year;
}

// Copy constructor; takes another 'Date' object to set its data members.
Date::Date (Date &original) {
    this->month = original.getMonth();
    this->day = original.getDay();
    this->year = original.getYear();
}

// Setter; returns nothing, sets the date to the given parameters.
void Date::set (int month, int day, int year) {
    this->month = month;
    this->day = day;
    this->year = year;
}

// Getter; returns the value of private data 'month'.
int Date::getMonth () {
    return month;
}

// Getter; returns the value of private data 'day'.
int Date::getDay () {
    return day;
}

// Getter; returns the value of private data 'year'.
int Date::getYear () {
    return year;
}

// Simple void function to print the date.
void Date::print () {
    std::cout << month << "/" << day << "/" << year << std::endl;
}