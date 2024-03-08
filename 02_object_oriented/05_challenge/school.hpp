#include <vector>

#include "student.hpp"
#include "teacher.hpp"


class School{
public:
    void assign(Teacher* teacher, Student* student);
    void enrollStudent(Student* student);
    void hireTeacher(Teacher* teacher);
private:
    std::vector<Student*> students;
    std::vector<Teacher*> teachers;
};
