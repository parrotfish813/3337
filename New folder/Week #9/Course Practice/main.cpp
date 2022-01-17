#include <iostream>
#include <string>
#include "Course.h"

using namespace std;

int main() {

    string str = "Object Oriented Programming";

    Course course1(str, 48);

    course1.addStudent("John Snow");
    course1.addStudent("Tyrion Lannister");

    string *allStudent = course1.getStudents();

    for(int i = 0; i < course1.getNumberOfStudents(); i++) {
        cout << allStudent[i] << endl;
    }

    Course *pCourse2 = new Course();

    return 0;

};



