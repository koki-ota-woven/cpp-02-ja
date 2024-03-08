#include "teacher.hpp"

Teacher::Teacher(const std::string& name) : name(name){}

void Teacher::assignStudent(Student* student) {
    students.push_back(student);
}