#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"

using namespace std;

Person::Person() {
	name = "null";
	id = 0;
}

Person::Person(string n, int i) {
	name = n;
	id = i;
}

void Person::displayPersonInfo() {
	cout << "name:" << name << endl;
	cout << "ID:" << id << endl;
}

Student::Student() {
	yearLevel = 0;
	major = "null";
}

Student::Student(int y, string m) {
	yearLevel = y;
	major = "null";
}
void Student:: displayStudentInfo() {
	cout << "yearlevel:" << yearLevel << endl;
	cout << "major:" << major << endl;
}
Instructor::Instructor() {
	department = "null";
	experienceYears = 0;
}

Instructor::Instructor(string d, int e) {
	department = d;
	experienceYears = e;
}
void Instructor::displayInstructorInfo() {
	cout << "Department:" << department << endl;
	cout << "ExpYears:" << experienceYears << endl;
}

course::course() {
	courseCode = "null";
	courseName = "null";
	maxStudents = 0;

}
course::course(string code, string name, int max, int current) {
	courseCode = code;
	courseName = name;
	maxStudents = max;
	currentStudents = current;
}
void course::displayCourseInfo() {
	cout << courseCode << endl;
	cout << courseName << endl;
	cout << maxStudents << endl;
	cout << currentStudents << endl;

}
return 0;
}
