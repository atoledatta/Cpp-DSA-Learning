#include <iostream>
#include <string> // string वापरण्यासाठी आवश्यक
using namespace std;

int main() {
    // 1. Integer (पुर्ण संख्या)
    int rollNumber = 101;
    
    // 2. Float and Double (दशांश संख्या)
    float percentage = 85.5f; // 'f' indicates float
    double piValue = 3.1415926535; // double handles more precision
    
    // 3. Character (एकच अक्षर)
    char grade = 'A'; // always enclosed in single quotes
    
    // 4. Boolean (सत्य किंवा असत्य)
    bool isPassed = true; // stores 1 (true) or 0 (false)
    
    // 5. String (शब्दांचा समूह / वाक्य)
    string studentName = "Datta Atoole"; // always enclosed in double quotes

    // Displaying the values
    cout << "--- C++ Data Types & Variables ---" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Roll Number : " << rollNumber << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;
    cout << "Exam Status : " << isPassed << " (1 means Passed, 0 means Failed)" << endl;

    return 0;
}