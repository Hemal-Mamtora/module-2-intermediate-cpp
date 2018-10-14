#include "Course.h"

Course::Course(){
    name = "";
    *student = new Student[3];
    teacher = new Teacher(); 
}

Course::Course(std::string name, Student* stud[], Teacher* t){
    this->name = name;
    *student = *stud;
    teacher = t;
}

Course::~Course(){}