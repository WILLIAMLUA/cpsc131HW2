// CPSC131HW2
// William LUa
// Kingsley Xie

#include <iostream>
#include <string>
#include <vector>
#include "vector131.h"

using namespace std;

// Functions
void createVec(vector<vector131>&);
void showVec(const vector<vector131>&);

int main()
{
    vector<vector131> uVec;
    createVec(uVec);
    showVec(uVec);

    system("pause");
    return 0;
}

//Create Vector Function:
// Collect User data

void createVec(vector<vector131>& newVec){

    //Variables
    int size;
    string nCourse;
    string SName;
    int Sid;

    cout << "Enter Number of Students: ";
    cin >> size;

    for(int i = 0; i < size; i++){

        cout << "Enter course name: ";
        cin >> nCourse;
        cout << "Enter student first name: ";
        cin >> SName;
        cout << "Enter student ID: ";
        cin >> Sid;

        vector131 newStudent(nCourse, SName, Sid);
        newVec.push_back(newStudent);

    }
    
    cout << endl;


}
// Displays user data
void showVec(const vector<vector131>& newVec){

    unsigned int vecSize = newVec.size();
    
    cout << "The following was entered: " << endl;

    for (unsigned int i = 0; i < vecSize; i++){
        cout << "Course: " << newVec[i].getCourse() << endl;
        cout << "Student: " << newVec[i].getName() << endl;
        cout << "ID number: " << newVec[i].getID() << endl;
    }
}
