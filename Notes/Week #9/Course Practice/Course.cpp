#include "Course.h"

using namespace std;

Course::Course() {

    numberOfStudents = 0;
    courseName = "Default Course";
    capacity = 20;
    students = new string[capacity];

}

Course::Course(const string &courseName, int newCapacity) {

    numberOfStudents = 0;
    this -> courseName = courseName;
    capacity = newCapacity;
    students = new string[capacity];

}

Course::Course(const Course &course1) {

    numberOfStudents = course1.getNumberOfStudents();
    courseName = course1.getCourseName();
    capacity = course1.getCapacity();
    students = course1.getStudents();

}

Course::~Course() {

    delete [] students;

}

string Course::getCourseName() const {
    return courseName;
}

string * Course::getStudents() const {
    return students;
}
int Course::getNumberOfStudents() const {
    return numberOfStudents;
}
int Course::getCapacity() const {
    return capacity;
}

void Course::addStudent(const string &name) {
    students[numberOfStudents] = name;
    numberOfStudents++;
}

