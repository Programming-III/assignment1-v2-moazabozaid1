#include "Person.h"
using namespace std;


class Instructor
{
private:
	string department;
	int experienceYears;
public:
	Instructor();
	Instructor(string d, int e);
	void displayInstructorInfo();
	~Instructor();
};
#endif;
