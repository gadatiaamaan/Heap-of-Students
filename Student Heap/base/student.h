// Header file for student

#include <string>
#include "address.h"
#include "date.h"
#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

class Student {
  private:
    std::string fname; // first name
    std::string lname; // last name
    Address* fullAddress; // address object
    Date* bday; // birthday object
    Date* gday; // graduation date object
    std::string gpa; // gpa
    std::string hours; // credit hours complete

  public:
    Student(); // constructor
    Student(std::string);
    void setter(std::string); // sets all parts of student from dat file
    ~Student(); // deconstructor
    std::string getfname(); // getter for first name
    std::string getlname(); // getter for last name
    std::string getgpa(); // getter for gpa
    std::string gethours(); // getter for credit hours
    void setfname(std::string); // setter for first name
    void setlname(std::string); // setter for last name
    void setgpa(std::string); // setter for gpa
    void sethours(std::string); // setter for credit hours
    void setfullAddress(Address*); // setting address line 1
    void setbday(Date*); // setting date of birth
    void setgday(Date*); // setting graduation date
    Address getfullAddress(); // getting address
    Date getbday(); // getting birthday
    Date getgday(); // getting graduation date
    void printfull(); // prints out everything
    void printshort(); // prints just the names
    friend std::ostream& operator<<(std::ostream& out, const Student& s); // stream object that outputs everything

}; // end class student
#endif

