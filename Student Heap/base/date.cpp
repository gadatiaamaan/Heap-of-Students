// C++ file for date

#include "date.h"
#include <string>
#include <iostream>

Date::Date() { // initializes the date constructor
	Date::month = "";
	Date::day = "";
	Date::year = "";} // sets all values to nothing

std::string Date::getmonth(){ // getter for month
  return Date::month;}
void Date::setmonth(std::string number){ // setter for month
  Date::month = number;}

std::string Date::getday(){ // getter for day
  return Date::day;}
void Date::setday(std::string number){ // setter for day
  Date::day = number;}

std::string Date::getyear(){ // getter for year
  return Date::year;}
void Date::setyear(std::string number){ // setter for year
  Date::year = number;}

Date::~Date(){} // deconstructor

std::ostream& operator << (std::ostream& out, const Date& d) { // output stream for the date
	out << d.month << "/" << d.day << "/" << d.year;
	return out;}

void Date::printDate() { // prints the full date
	std::cout << month << "/" << day << "/" << year;}
