#include "student.h"
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

#define MAX 50

// Function to swap two strings
void swap(string *x, string *y) {
    string temp = *x;
    *x = *y;
    *y = temp;
}

// Function to sort an array of strings
void sort(string values[]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < (MAX - i - 1); j++) {
            if (values[j] > values[j + 1])
                swap(&values[j], &values[j + 1]);
        }
    }
}

int main() {
    ifstream inFile("students.dat"); // Open input file
    ofstream fullReport("fullReport.txt"); // Open full report output file
    ofstream shortReport("shortReport.txt"); // Open short report output file
    ofstream alphaReport("alphaReport.txt"); // Open alphabetical report output file
    
    // Create a stringstream
    stringstream ss;
    
    // Create an array of Student objects on the heap
    Student *studentArray = new Student[MAX];
    
    // Read data from file into Student objects
    string datline;
    for (int x = 0; x < MAX; x++) {
        getline(inFile, datline);
        studentArray[x].setter(datline);
    }

    // Generate full report
    for (int f = 0; f < MAX; f++) {
        fullReport << studentArray[f] << endl;
    }

    // Generate short report
    for (int s = 0; s < MAX; s++) {
        shortReport << studentArray[s].getfname() + " " + studentArray[s].getlname() << endl;
    }

    // Generate alphabetical report
    string alphaSort[MAX];
    for (int y = 0; y < MAX; y++) {
        alphaSort[y] = studentArray[y].getfname() + " " + studentArray[y].getlname();
    }
    sort(alphaSort);
    for (int a = 0; a < MAX; a++) {
        alphaReport << alphaSort[a] << endl;
    }

    // Clean up
    delete[] studentArray;
    inFile.close();
    fullReport.close();
    shortReport.close();
    alphaReport.close();
  
    return 0;
}
