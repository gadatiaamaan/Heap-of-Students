// C++ file for student

#include "student.h"
#include "address.h"
#include "date.h"
#include <string>
#include <sstream>


Student::Student() { // constructor with null values
  Student::fname = "";
  Student::lname = "";
  Student::bday = new Date();
  Student::gday = new Date();
  Student::fullAddress = new Address();
  Student::gpa = "0";
  Student::hours = "0";}

Student::~Student() { // deconstructor
  delete fullAddress;
  delete bday;
  delete gday;}

Student::Student(std::string current) {
  std::stringstream ss(current);
  Student::fullAddress = new Address();
  Student::bday = new Date();
  Student::gday = new Date();
  std::string templine1, templine2, tempcity, tempstate, tempzip, tempbday, tempbmonth, tempbyear, tempgday, tempgmonth, tempgyear, tempgpa, temphours; // create temp placeholders that will be used in the get
  
  getline(ss, Student::lname, ','); // gets the last name 
  getline(ss, Student::fname, ','); // gets the first name
  getline(ss, templine1, ','); // gets the address 1
  getline(ss, templine2, ','); // gets the address 2
  getline(ss, tempcity, ','); // gets the city 
  getline(ss, tempstate, ','); // gets the state
  getline(ss, tempzip, ','); // gets the zip
  getline(ss, tempbday, '/'); // gets Bday
  getline(ss, tempbmonth, '/'); // gets bmonth
  getline(ss, tempbyear, ','); // gets byear
  getline(ss, tempgday, '/'); // gets graduation day
  getline(ss, tempgmonth, '/'); // gets graduation  month
  getline(ss, tempgyear, ','); // gets graduation  year  
  getline(ss, tempgpa, ','); // gets gpa
  getline(ss, temphours); // gets credit hours

  Student::fullAddress -> setline1(templine1); // sets address 1
  Student::fullAddress -> setline2(templine2); // sets address 2
  Student::fullAddress -> setcity(tempcity); // sets city
  Student::fullAddress -> setstate(tempstate); // sets state
  Student::fullAddress -> setzip(tempzip); // sets zip
  Student::gday -> setday(tempgday); // sets graduation day
  Student::gday -> setmonth(tempgmonth); // sets graduation month
  Student::gday -> setyear(tempgyear); // sets graduation year
  Student::bday -> setday(tempbday); // sets bday
  Student::bday -> setmonth(tempbmonth); // sets bmonth
  Student::bday -> setyear(tempbyear); // sets byear
  Student::setgpa(tempgpa); // sets gpa
  Student::sethours(temphours);} // sets credit hour

void Student::setfname(std::string value) { // setter for first name
  Student::fname = value;}
std::string Student::getfname() { // getter for first name
  return Student::fname;}
void Student::setlname(std::string value) { // setter for last name
  Student::lname = value;}
std::string Student::getlname() { // getter for last name
  return Student::lname;}
Address Student::getfullAddress() { // getter for address
  return *Student::fullAddress;}
void Student::setfullAddress(Address * value) { // setter for address
  Student::fullAddress = value;}
Date Student::getbday() { // getter for bday
  return *Student::bday;}
void Student::setbday(Date * value) { // setter for bday
  Student::bday = value;}
Date Student::getgday() { // getter for graduation day
  return *Student::gday;}
void Student::setgday(Date * value) { // setter for graduation day
  Student::gday = value;}
std::string Student::getgpa() { // getter for gpa
  return Student::gpa;}
void Student::setgpa(std::string value) { // setter for gpa
  Student::gpa = value;}
std::string Student::gethours() { // getter for credit hours
  return Student::hours;}
void Student::sethours(std::string value) { // setter for credit hours
	Student::hours = value;}

std::ostream& operator << (std::ostream& out, const Student& s) { // streams the data out
	out << s.lname << ", " << s.fname << " " << *s.fullAddress << " " << *s.bday << " " << *s.gday << " " << s.gpa << " " << s.hours;
	return out;}

void Student::setter(std::string current) {
  std::stringstream ss(current);
  std::string templine1, templine2, tempcity, tempstate, tempzip, tempbday, tempbmonth, tempbyear, tempgday, tempgmonth, tempgyear, tempgpa, temphours; // create temp placeholders that will be used in the get

  getline(ss, Student::lname, ','); // gets the last name 
  getline(ss, Student::fname, ','); // gets the first name
  getline(ss, templine1, ','); // gets the address 1
  getline(ss, templine2, ','); // gets the address 2
  getline(ss, tempcity, ','); // gets the city 
  getline(ss, tempstate, ','); // gets the state
  getline(ss, tempzip, ','); // gets the zip
  getline(ss, tempbday, '/'); // gets Bday
  getline(ss, tempbmonth, '/'); // gets bmonth
  getline(ss, tempbyear, ','); // gets byear
  getline(ss, tempgday, '/'); // gets graduation day
  getline(ss, tempgmonth, '/'); // gets graduation  month
  getline(ss, tempgyear, ','); // gets graduation  year  
  getline(ss, tempgpa, ','); // gets gpa
  getline(ss, temphours); // gets credit hours

  Student::fullAddress -> setline1(templine1); // sets address 1
  Student::fullAddress -> setline2(templine2); // sets address 2
  Student::fullAddress -> setcity(tempcity); // sets city
  Student::fullAddress -> setstate(tempstate); // sets state
  Student::fullAddress -> setzip(tempzip); // sets zip
  Student::gday -> setday(tempgday); // sets graduation day
  Student::gday -> setmonth(tempgmonth); // sets graduation month
  Student::gday -> setyear(tempgyear); // sets graduation year
  Student::bday -> setday(tempbday); // sets bday
  Student::bday -> setmonth(tempbmonth); // sets bmonth
  Student::bday -> setyear(tempbyear); // sets byear
  Student::setgpa(tempgpa); // sets gpa
  Student::sethours(temphours);} // sets credit hour


void Student::printfull(){ // prints everything!
  Student::printshort();
  std::cout << " ";
  fullAddress -> printAddress();
  bday -> printDate();
  std::cout << " ";
  gday -> printDate();
  std::cout << gpa << ", " << hours;}

void Student::printshort(){ // prints only the names
  std::cout << fname << " " << lname;}





