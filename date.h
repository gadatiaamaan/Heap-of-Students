#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS

#include <iostream>
#include <string>

using namespace std;

class Date {
private:
    string month; // Month string
    string day; // Day string
    string year; // Year string

public:
    // Constructor to initialize the Date object
    Date();

    // Destructor
    ~Date();

    // Getter for month
    string getmonth();

    // Getter for day
    string getday();

    // Getter for year
    string getyear();

    // Setter for month
    void setmonth(string);

    // Setter for day
    void setday(string);

    // Setter for year
    void setyear(string);

    // Overloaded << operator to output Date object
    friend ostream& operator << (ostream& out, const Date& d);

    // Function to print the date
    void printDate();

}; // end class

#endif
