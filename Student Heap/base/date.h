// Header file for date

#include <iostream>
#include <string>
#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS

class Date {

  private:
    std::string month; // month string
    std::string day; // day string
    std::string year; // year string

  public:
    Date(); // constructor
    ~Date(); // deconstructor
    std::string getmonth(); // getter for month
    std::string getday(); // getter for day
    std::string getyear(); // getter for year
    void setmonth(std::string); // setter for month
    void setday(std::string); // setter for day
    void setyear(std::string); // setter for year
    friend std::ostream& operator << (std::ostream& out, const Date& d); // output stream for the date
    void printDate(); 
    
}; // end class
#endif

