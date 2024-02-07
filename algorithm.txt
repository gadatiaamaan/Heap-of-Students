# General Program
The overall purpose of this program is to take the students.dat file which as the information of 50 students and output the information of these students into separate files. The fullReport.txt will have all the information about the students, the shortReport.txt will have just the first and last names of the students, and the alphaReport.txt will have just the first and last names in alphabetical order.
The more indept process that will be used here is the heap. All classes will be stored on the heap and then also deconstruct these to prevent memory leaks.

# Date Class
This class' goal is to store the dates of the date of brith and the graduation date of the student on the heap and then delete them to prevent memory leaks.
## Input
There will be no direct input but it will take the string dates from the students.dat file
## Output
The output of this will output the dates for the date of birth and the graduation date for the students to the fullReport. This will not be needed in the other reports.
## Steps
This class will need a constructor and a destructor. The initial constructor will input null values as place holders into the Day, Month, and Year variables. Each of the Day, Month, and Year variables will also have getters and setters to get their values.

# Address Class
This class' goal is to store the address' of the students on the heap and then delete them to prevent memory leaks.
## Input
There will be no direct input but it will take the string address information from the students.dat file
## Output
The output of this will output the address of all of the students to the fullReport. This will not be needed in the other reports.
## Steps
This class will need a constructor and a destructor. The initial constructor will input null values as place holders into the address1, address2, city, state, and zip variables. Each of the address1, address2, city, state, and zip variables will also have getters and setters to get their values.

# Student Class
This class' goal is to store all of the students informations of the heap and delete them to prevent memory leaks. This will take infromation from the date and address classes to get all of the information for the students.
## Input
There will be no direct input but it will take the string address information from the students.dat file
## Output
The output of this will output the all information of all of the students to the fullReport, shortReport, and alphaReport. 
## Steps
This class will need a constructor and a destructor. The initial constructor will input null values as place holders for the first name, last name, gpa, and credit hours. This will also use pointers to get information about the address and dates. There will be getters and setters for all variables and pointers will be used to get some of these varialbes. New variables will be created to make the address, birthdays, and graduation days their own values.

# Main Function
The main function will be used to open the students.dat file and take the information and actaully create the actions of calling functions to store the inforamtion on the heap. This will create 3 file to output the different types of information.
## Input
There will be no direct input but it will take the string address information from the students.dat file
## Output
The output of this will output the all information of all of the students to the fullReport, shortReport, and alphaReport. 
## Steps
This function will opne the students.dat file and also create the fullreport file the shortreport file and the alphareport file. The get function will be used to take in the streams from the dat text file and store it on the heap and then output it into the files. The stringstream will be used to retrive and outstream the information. For looks will be used to scroll through the dat file. the text files will be closed as the end and the main program will run. 
