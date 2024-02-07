#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

#include <string>
#include <iostream>

using namespace std;

class Address {
private:
    string line1; // Address line 1
    string line2; // Address line 2
    string city; // City
    string state; // State
    string zip; // Zip code

public:
    // Constructor to initialize the Address object
    Address();

    // Destructor
    ~Address();

    // Getter for line1
    string getline1();

    // Getter for line2
    string getline2();

    // Getter for city
    string getcity();

    // Getter for state
    string getstate();

    // Getter for zip
    string getzip();

    // Setter for line1
    void setline1(string);

    // Setter for line2
    void setline2(string);

    // Setter for city
    void setcity(string);

    // Setter for state
    void setstate(string);

    // Setter for zip
    void setzip(string);

    // Overloaded << operator to output Address object
    friend ostream& operator << (ostream& out, const Address& a);

    // Function to print the address
    void printAddress();

}; // close address

#endif
