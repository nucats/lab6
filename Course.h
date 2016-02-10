#ifndef LAB5_COURSE_H
#define LAB5_COURSE_H

#include "Student.h"
#include <iostream>

using namespace std;

/*represents unique course */
struct Course {

    int cid;
    string dept;
    string name;

    Course();
    Course(int c, string d, string n="hi"); //modify constructor and add default value, or add new constructor

};

ostream & operator<<(ostream &, Course &);

#endif //LAB5_COURSE_H
