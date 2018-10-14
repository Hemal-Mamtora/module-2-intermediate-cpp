#include <string>
#include "Student.h"

Student::Student(){
    fname = "";
    lname = "";
    age = 0;
    address = "";
    city = "";
    phone = 0;
}
        
Student::Student(
std::string fname, 
std::string lname, 
int age, 
std::string address, 
std::string city, 
long phone){
    this->fname = fname;
    this->lname = lname;
    this->age = age;
    this->address = address;
    this->city = city;
    this->phone = phone;
}

std::string Student::get_fname(){
    return fname;
}

std::string Student::get_lname(){
    return lname;
}

int Student::get_age(){
    return age;
}

std::string Student::get_address(){
    return address;
}

std::string Student::get_city(){
    return city;
}

long Student::get_phone(){
    return phone;
}

Student::~Student(){}
