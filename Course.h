#include "Student.h"
#include "Teacher.h"
#include "string"
class Course{
    private:
        std::string name;
        Student* student[3];
        Teacher* teacher;

    public:
        Course();
        Course(std::string  name, Student* student[], Teacher* teacher);
        ~Course();
        Student* get_students();
        Teacher get_teacher();
};