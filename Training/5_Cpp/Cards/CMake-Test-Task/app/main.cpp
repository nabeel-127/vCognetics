#include <iostream>
#include <string>
#include <map>
#include "../include/student.h"

int main()
{
	student students[2];

	students[0].set_roll_no("BEE173059");
	students[0].set_age(21);
	students[0].set_cgpa(3.5);
	students[0].set_subject_marks("mathematics", 50);
	students[0].set_subject_marks("physics", 60);
	students[0].set_subject_marks("science", 70);
	students[0].set_subject_marks("history", 80);

	students[1].set_roll_no("BEE173059");
	students[1].set_age(21);
	students[1].set_cgpa(3.5);
	students[1].set_subject_marks("mathematics", 50);
	students[1].set_subject_marks("physics", 60);
	students[1].set_subject_marks("science", 70);
	students[1].set_subject_marks("history", 80);

	std::cout << "Roll #: " << students[0].get_roll_no() << std::endl;
	std::cout << "Age: " << students[0].get_age() << std::endl;
	std::cout << "CGPA: " << students[0].get_cgpa() << std::endl;
	students[0].print_all_marks();

	std::cout << "\nRoll #: " << students[1].get_roll_no() << std::endl;
	std::cout << "Age: " << students[1].get_age() << std::endl;
	std::cout << "CGPA: " << students[1].get_cgpa() << std::endl;
	students[1].print_all_marks();
	std::cout << std::endl;

	return 0;
}
