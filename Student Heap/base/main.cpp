// C++ file for the main function

#include "student.h"
#include <fstream>
#include <sstream>
#define MAX 50

void swap(std::string *x, std::string *y) {
    std::string temp = *x;
    *x = *y;
    *y = temp;
} // end swap

void sort(std::string values[]){
 // int i,j;
  for(int i = 0; i < MAX; i++){
    for (int j = 0; j < (MAX-i-1); j++){
      if (values[j] > values[j+1])
        swap(&values[j]  , &values[j+1]);}}} // end sort

int main() { 
  std::ifstream inFile; // input stream
  inFile.open("students.dat"); // opens dat file
  std::string current; // reprsents the line in the file
  std::ofstream fullReport; // output stream to the full report
  std::ofstream shortReport; // output stream to the short report
  std::ofstream alphaReport; // output stream to the alphabetical report
  fullReport.open("fullReport.txt"); // opens file for full report
  shortReport.open("shortReport.txt"); // opens file for short report
  alphaReport.open("alphaReport.txt"); // opens file for alphabetical report
  std::stringstream ss; // creates the stringstream 
  Student * studentArray = new Student[MAX]; // creates the array of pointers for the students on the heap
  std::string datline; // represents string holding the line
  for(int x = 0; x < MAX; x++) { // goes through all 50 lines in dat file
    getline(inFile, datline); // datline gets every line
    studentArray[x].setter(datline);} // creates object for each line in the file and ends the for loop
  for (int f = 0; f < MAX; f++){ // goes through all 50 lines for the full report
    fullReport << studentArray[f] << std::endl;} // creates the full report
  for (int s = 0; s < MAX; s++){ // goes through all 50 lines for the short report
    shortReport << studentArray[s].getfname() + " " + studentArray[s].getlname() << std::endl;} // creates the short report
  std::string alphaSort[MAX];
  for (int y = 0; y < MAX; y++){ // goes through all 50 lines for sorting
    alphaSort[y] = studentArray[y].getfname() + " " + studentArray[y].getlname();} // gets data needed for the alphabetical report
  sort(alphaSort); // calls the sort function to sort
  for (int a = 0; a < MAX; a++){ // goes through all 50 lines for the alpha report
    alphaReport << alphaSort[a] << std::endl;} // creates the alpha report
  delete[] studentArray; // delete the array to prevent mem leaks  

  fullReport.close(); // closes the full report
  shortReport.close(); // closes the short report
  alphaReport.close(); // closes the alpha report
  
  return 0; // standard end to main in C++
} // end main


