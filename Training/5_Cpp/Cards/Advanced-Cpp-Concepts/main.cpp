#include <iostream>
#include "student.h"
#include "whitelist.h"

int main()
{
	student my_students[3], *temp = NULL;
	whitelist whitelisted(3);
	my_students[0].set_roll_no("BEE173059");
	my_students[0].set_age(21);
	my_students[0].set_cgpa(3.5);
	my_students[0].set_subject_marks("mathematics", 50);
	my_students[0].set_subject_marks("physics", 60);
	my_students[0].set_subject_marks("science", 70);
	my_students[0].set_subject_marks("history", 80);

	my_students[1].set_roll_no("BEE173060");
	my_students[1].set_age(21);
	my_students[1].set_cgpa(3.5);
	my_students[1].set_subject_marks("mathematics", 55);
	my_students[1].set_subject_marks("physics", 65);
	my_students[1].set_subject_marks("science", 75);
	my_students[1].set_subject_marks("history", 85);

	my_students[2].set_roll_no("BEE173061");
	my_students[2].set_age(31);
	my_students[2].set_cgpa(3.7);
	my_students[2].set_subject_marks("mathematics", 90);
	my_students[2].set_subject_marks("physics", 90);
	my_students[2].set_subject_marks("science", 90);
	my_students[2].set_subject_marks("history", 90);

	whitelisted.add_to_whitelist("Nabeel", my_students[0]);
	whitelisted.add_to_whitelist("Ali", my_students[1]);
	whitelisted.add_to_whitelist("Haris", my_students[2]);

	std::cout << "Is Student Present: " << whitelisted.is_student_present("Nabeel") << std::endl;
	std::cout << "Is Student Present: " << whitelisted.is_student_present("Ali") << std::endl;

	temp = whitelisted.get_student_data("Nabeel");
	std::cout << "Student Roll #: " << temp->get_roll_no() << std::endl;
	temp->print_all_marks();
	temp = NULL;
	temp = whitelisted.get_student_data("Ali");
	std::cout << "Student Roll #: " << temp->get_roll_no() << std::endl;
	temp->print_all_marks();
	temp = NULL;
	temp = whitelisted.get_student_data("Haris");
	std::cout << "Student Roll #: " << temp->get_roll_no() << std::endl;
	temp->print_all_marks();

	system("pause");
	return 0;
}