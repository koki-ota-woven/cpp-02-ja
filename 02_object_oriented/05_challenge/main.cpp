#include "student.hpp"
#include "teacher.hpp"
#include "school.hpp"

int main() {
    School school;
    Teacher teacher("Ota");
    Student student("Tanaka");

    school.enrollStudent(&student);
    school.hireTeacher(&teacher);

    school.assign(&teacher, &student);

    return 0;
}
