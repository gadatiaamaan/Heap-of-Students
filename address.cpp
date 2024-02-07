#include "address.h"
#include <string>
#include <iostream>

using namespace std;

// Constructor to initialize the Address object
Address::Address() { 
  // Initialize all elements of the Address object to empty strings
  line1 = "";
  line2 = "";
  city = "";
  state = "";
  zip = "";
}

// Destructor
Address::~Address() {}

// Getter for line1
string Address::getline1() { 
  return line1;
}

// Setter for line1
void Address::setline1(string value) { 
  line1 = value;
} 

// Getter for line2
string Address::getline2() { 
  return line2;
}

// Setter for line2
void Address::setline2(string value) { 
  line2 = value;
}

// Getter for city
string Address::getcity() { 
  return city;
}

// Setter for city
void Address::setcity(string value) { 
  city = value;
}

// Getter for state
string Address::getstate() { 
  return state;
}

// Setter for state
void Address::setstate(string value) { 
  state = value;
}

// Getter for zip
string Address::getzip() { 
  return zip;
}

// Setter for zip
void Address::setzip(string value) { 
  zip = value;
}

// Overloaded << operator to output Address object
ostream& operator << (ostream& out, const Address& a) { 
  // Output address components
  out << a.line1 << " " << a.line2 << " " << a.city << ", " << a.state << " " << a.zip;
  return out;
}

// Function to print the address
void Address::printAddress() { 
  // Print address components
  cout << line1 << " " << line2 << ", " << city << ", " << state << ", " << zip;
}
