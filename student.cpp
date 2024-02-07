#include "student.h"
#include "address.h"
#include "date.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

// Default constructor
Student::Student() {
    // Initialize member variables with default values
    fname = "";
    lname = "";
    bday = new Date();
    gday = new Date();
    fullAddress = new Address();
    gpa = "0";
    hours = "0";
}

// Destructor
Student::~Student() {
    // Deallocate dynamically allocated memory to prevent memory leaks
    delete fullAddress;
    delete bday;
    delete gday;
}

// Constructor with parameters
Student::Student(string current) {
    stringstream ss(current);
    // Allocate memory for dynamic members
    fullAddress = new Address();
    bday = new Date();
    gday = new Date();
    string templine1, templine2, tempcity, tempstate, tempzip, tempbday, tempbmonth, tempbyear, tempgday, tempgmonth, tempgyear, tempgpa, temphours;

    // Parsing the input string to initialize student data
    getline(ss, lname, ',');
    getline(ss, fname, ',');
    getline(ss, templine1, ',');
    getline(ss, templine2, ',');
    getline(ss, tempcity, ',');
    getline(ss, tempstate, ',');
    getline(ss, tempzip, ',');
    getline(ss, tempbday, '/');
    getline(ss, tempbmonth, '/');
    getline(ss, tempbyear, ',');
    getline(ss, tempgday, '/');
    getline(ss, tempgmonth, '/');
    getline(ss, tempgyear, ',');
    getline(ss, tempgpa, ',');
    getline(ss, temphours);

    // Setting student data
    fullAddress->setline1(templine1);
    fullAddress->setline2(templine2);
    fullAddress->setcity(tempcity);
    fullAddress->setstate(tempstate);
    fullAddress->setzip(tempzip);
    gday->setday(tempgday);
    gday->setmonth(tempgmonth);
    gday->setyear(tempgyear);
    bday->setday(tempbday);
    bday->setmonth(tempbmonth);
    bday->setyear(tempbyear);
    setgpa(tempgpa);
    sethours(temphours);
}

// Setter and getter functions for student properties
void Student::setfname(string value) {
    fname = value;
}

string Student::getfname() {
    return fname;
}

void Student::setlname(string value) {
    lname = value;
}

string Student::getlname() {
    return lname;
}

Address Student::getfullAddress() {
    return *fullAddress;
}

void Student::setfullAddress(Address *value) {
    fullAddress = value;
}

Date Student::getbday() {
    return *bday;
}

void Student::setbday(Date *value) {
    bday = value;
}

Date Student::getgday() {
    return *gday;
}

void Student::setgday(Date *value) {
    gday = value;
}

string Student::getgpa() {
    return gpa;
}

void Student::setgpa(string value) {
    gpa = value;
}

string Student::gethours() {
    return hours;
}

void Student::sethours(string value) {
    hours = value;
}

// Overloaded stream insertion operator to output student data
ostream& operator<<(ostream& out, const Student& s) {
    out << s.lname << ", " << s.fname << " " << *s.fullAddress << " " << *s.bday << " " << *s.gday << " " << s.gpa << " " << s.hours;
    return out;
}

// Setter function for student properties from string input
void Student::setter(string current) {
    stringstream ss(current);
    string templine1, templine2, tempcity, tempstate, tempzip, tempbday, tempbmonth, tempbyear, tempgday, tempgmonth, tempgyear, tempgpa, temphours;

    // Parsing the input string to initialize student data
    getline(ss, lname, ',');
    getline(ss, fname, ',');
    getline(ss, templine1, ',');
    getline(ss, templine2, ',');
    getline(ss, tempcity, ',');
    getline(ss, tempstate, ',');
    getline(ss, tempzip, ',');
    getline(ss, tempbday, '/');
    getline(ss, tempbmonth, '/');
    getline(ss, tempbyear, ',');
    getline(ss, tempgday, '/');
    getline(ss, tempgmonth, '/');
    getline(ss, tempgyear, ',');
    getline(ss, tempgpa, ',');
    getline(ss, temphours);

    // Setting student data
    fullAddress->setline1(templine1);
    fullAddress->setline2(templine2);
    fullAddress->setcity(tempcity);
    fullAddress->setstate(tempstate);
    fullAddress->setzip(tempzip);
    gday->setday(tempgday);
    gday->setmonth(tempgmonth);
    gday->setyear(tempgyear);
    bday->setday(tempbday);
    bday->setmonth(tempbmonth);
    bday->setyear(tempbyear);
    setgpa(tempgpa);
    sethours(temphours);
}

// Print full student information
void Student::printfull() {
    printshort(); // Print only names
    cout << " ";
    fullAddress->printAddress(); // Print full address
    bday->printDate(); // Print birthday
    cout << " ";
    gday->printDate(); // Print graduation date
    cout << gpa << ", " << hours; // Print GPA and hours
}

// Print only student names
void Student::printshort() {
    cout << fname << " " << lname;
}
