// C++ file for address object

#include "address.h"
#include <string>
#include <iostream>

Address::Address() { // initialize the constructor
  Address::line1 = "";
  Address::line2 = "";
  Address::city = "";
  Address::state = "";
  Address::zip = "";} // gives all elements of address a null value to begin with

Address::~Address() {} // deconstructor so that address does not create anything on the heap and no mem leaks

std::string Address::getline1() { // getter for address 1
  return Address::line1;}
void Address::setline1(std::string value) { // sets the address 1
  Address::line1 = value;} 

std::string Address::getline2() { // getter for address 2
  return Address::line2;}
void Address::setline2(std::string value) { // sets the address 2
  Address::line2 = value;}

std::string Address::getcity() { // getter for city
  return Address::city;}
void Address::setcity(std::string value) { // sets the city
  Address::city = value;}

std::string Address::getstate() { // getter for state
  return Address::state;}
void Address::setstate(std::string value) { // sets the state
  Address::state = value;}

std::string Address::getzip() { // getter for zip
  return Address::zip;}
void Address::setzip(std::string value) { // sets the zip
  Address::zip = value;}

std::ostream& operator << (std::ostream& out, const Address& a) { // output stream for the object that outputs all the student information. Friend of ostream
  out << a.line1 << " " << a.line2 << " " << a.city << ", " << a.state << " " << a.zip;
  return out;}

void Address::printAddress(){ // prints the address
  std::cout << line1 << " " << line2 << ", " << city << ", " << state << ", " << zip;}

