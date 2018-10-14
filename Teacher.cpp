#include <string>
#include "Teacher.h"

Teacher::Teacher(){
    fname = "";
    lname = "";
    age = 0;
    address = "";
    city = "";
    phone = 0;
}
        
Teacher::Teacher(
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

std::string Teacher::get_fname(){
    return fname;
}

std::string Teacher::get_lname(){
    return lname;
}

int Teacher::get_age(){
    return age;
}

std::string Teacher::get_address(){
    return address;
}

std::string Teacher::get_city(){
    return city;
}

long Teacher::get_phone(){
    return phone;
}

Teacher::~Teacher(){}
