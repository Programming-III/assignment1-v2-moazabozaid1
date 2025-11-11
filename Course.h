#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class course
{
private:
	string courseCode;
	string courseName;
	int maxStudents;
	Student* students;
	int currentStudents;
public:
	course();
	course(string code, string name, int max, int current);
	void displayCourseInfo();
	void addStudent(const Student& s);
	~course();
};
#endif;
















