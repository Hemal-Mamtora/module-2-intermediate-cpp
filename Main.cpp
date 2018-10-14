#include "Course.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    Student* st[3];
    Student *stud1 = new Student("Hemal", "Mamtora", 20, "High Street", "Mumbai", 1234);
    Student *stud2 = new Student("Jack", "Ma", 35, "China Street", "HongKong", 1234);
    Student *stud3 = new Student("Elon", "Musk", 40, "Mountain View", "California", 1234);

    st[0] = stud1;
    st[1] = stud2;
    st[2] = stud3;

   
    Teacher *t = new Teacher("Power", "Ranger", 50, "Mountain View", "California", 1234);
    Course* course = new Course("Intermediate Cpp", st, t);
    t->GradeStudent();
    //delete[] st;
    delete stud1; delete stud2; delete stud3; delete t; delete course;

    return 0;
}