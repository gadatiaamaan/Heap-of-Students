#include "date.h"
#include <string>
#include <iostream>

using namespace std;

// Constructor to initialize the Date object
Date::Date() { 
	// Initialize month, day, and year to empty strings
	month = "";
	day = "";
	year = "";
}

// Destructor
Date::~Date() {}

// Getter for month
string Date::getmonth() {
	return month;
}

// Setter for month
void Date::setmonth(string number) {
	month = number;
}

// Getter for day
string Date::getday() {
	return day;
}

// Setter for day
void Date::setday(string number) {
	day = number;
}

// Getter for year
string Date::getyear() {
	return year;
}

// Setter for year
void Date::setyear(string number) {
	year = number;
}

// Overloaded << operator to output Date object
ostream& operator << (ostream& out, const Date& d) {
	// Output the date in the format: month/day/year
	out << d.month << "/" << d.day << "/" << d.year;
	return out;
}

// Function to print the date
void Date::printDate() {
	cout << month << "/" << day << "/" << year;
}
