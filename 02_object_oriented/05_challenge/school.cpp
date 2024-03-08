#include "school.hpp"

void School::assign(Teacher* teacher, Student* student){
    teacher->assignStudent(student);
    student->assignTeacher(teacher);
}

void School::enrollStudent(Student* student){
    students.push_back(student);
}
void School::hireTeacher(Teacher* teacher){
    teachers.push_back(teacher);
}