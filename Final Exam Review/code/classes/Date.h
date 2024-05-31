#include <iostream>

class Date {
    // Private data members; these cannot be accessed outside of the class.
    private:
        int month;
        int day;
        int year;
    
    // Public data members; these may be accessed outside of the class.
    public:
        // Default constructor; takes no parameters and must be public!
        Date ();

        // Parameterized contrusctor; takes paramters and must be public!
        Date (int month, int day, int year);

        // Copy constructor; takes another 'Date' object and must be public!
        Date (Date &original);

        // Setter; take in parameters, set private data to those parameters.
        void set (int month, int day, int year);

        // Getters; take in no parameters, return values of private data.
        int getMonth ();
        int getDay ();
        int getYear ();

        // Simple void function to print the data.
        void print();
}; // <-- Remember that class declarations end in semicolons!