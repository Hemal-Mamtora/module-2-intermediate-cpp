#include <string>

class Teacher {
    private:
        std::string fname;
        std::string lname;
        int age;
        std::string address;
        std::string city;
        long phone;
    
    public:
        Teacher();
        
        Teacher(
        std::string fname, 
        std::string lname, 
        int age, 
        std::string address, 
        std::string city, 
        long phone);

        std::string get_fname();
        std::string get_lname();
        int get_age();
        std::string get_address();
        std::string get_city();
        long get_phone();

        void GradeStudent();

        ~Teacher();
};