#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <string>
#include "address.h"
#include "date.h"

using namespace std;

class Student {
private:
    using string = string;
    string fname;             // First name
    string lname;             // Last name
    Address* fullAddress;     // Address object
    Date* bday;               // Date of birth object
    Date* gday;               // Graduation date object
    string gpa;               // GPA
    string hours;             // Credit hours completed

public:
    // Constructors and Destructor
    Student();                                  // Default constructor
    Student(string);                            // Constructor with string parameter
    ~Student();                                 // Destructor

    // Setter and Getter methods for student attributes
    void setter(string);                        // Set student attributes from string input
    string getfname();                          // Get first name
    string getlname();                          // Get last name
    string getgpa();                            // Get GPA
    string gethours();                          // Get credit hours
    void setfname(string);                      // Set first name
    void setlname(string);                      // Set last name
    void setgpa(string);                        // Set GPA
    void sethours(string);                      // Set credit hours
    void setfullAddress(Address*);             // Set full address
    void setbday(Date*);                        // Set date of birth
    void setgday(Date*);                        // Set graduation date
    Address getfullAddress();                   // Get full address
    Date getbday();                             // Get date of birth
    Date getgday();                             // Get graduation date

    // Output methods
    void printfull();                           // Print full student information
    void printshort();                          // Print only student names
    friend ostream& operator<<(ostream& out, const Student& s); // Overloaded stream insertion operator
};

#endif
