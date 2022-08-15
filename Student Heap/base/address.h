//Header file for address

#include <string>
#include <iostream>
#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

class Address {
  private:
    std::string line1; // address 1
    std::string line2; // address 2
    std::string city; // // city
    std::string state; // state
    std::string zip; // zip code
    
  public:
    Address(); // address constructor
    ~Address(); // deconstructor for address to prevent mem leaks
    std::string getline1(); // getter for address 1
    std::string getline2(); // getter for address 2
    std::string getcity(); // getter for the city
    std::string getstate(); // getter for state
    std::string getzip(); // getter for zip code
    void setline1(std::string); // setter for address 1
    void setline2(std::string); // setter for address 2
    void setcity(std::string); // setter for city
    void setstate(std::string); // setter for state
    void setzip(std::string); // setter for zip code
    friend std::ostream& operator << (std::ostream& out, const Address& a); // an output stream
    void printAddress(); // prints the full address

}; // close address
#endif
