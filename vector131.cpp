//Function Declarations:
#include "vector131.h"


//Default Constructor:
vector131::vector131(){
    newID = 0;
}

//Overload Constructor:
vector131::vector131(string course, string name, int id){
    newCourse = course;
    newName = name;
    newID = id;
}

//Deconstructor:
vector131::~vector131(){

}

//Accessor Funtions:
string vector131::getCourse() const{
    return newCourse;
}

string vector131::getName() const{
    return newName;
}

int vector131::getID() const{
    return newID;
}
