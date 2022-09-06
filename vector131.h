//Header File:

#ifndef VECTOR131_H
#define VECTOR131_H

#include <iostream>
#include <string>
using namespace std;


class vector131{

public:
    //Default Constructor:
    vector131();

    //Overloaded Constructor:
    vector131(string, string, int);

    //Deconstructor:
    ~vector131();

    //Accessor Funtions:
    string getCourse() const;

    string getName() const;

    int getID() const;

private:
    //Member Variables;
    string newCourse;
    string newName;
    int newID;
};

#endif
