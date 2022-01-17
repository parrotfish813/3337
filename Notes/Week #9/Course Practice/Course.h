#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

using namespace std;

class Course {

private:
    string courseName;
    int numberOfStudents;
    int capacity;
    string * students;

public:
    Course();
    Course(const string &courseName, int newCapacity);
    ~Course();

    Course(const Course &course1);

    string getCourseName() const;
    string * getStudents() const;
    int getNumberOfStudents() const;
    int getCapacity() const;

    void addStudent(const string &name);


};

#endif
