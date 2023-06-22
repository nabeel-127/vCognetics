#include <iostream>
#include "student.hpp"
#include "whitelist.hpp"

int main()
{
	student my_students[2], *temp;
	whitelist whitelisted;
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

	whitelisted.add_to_whitelist("Nabeel", my_students[0]);
	whitelisted.add_to_whitelist("Ali", my_students[1]);

	std::cout << "Is Student Present: " << whitelisted.is_student_present("Nabeel") << std::endl;

	temp = whitelisted.get_student_data("Ali");
	temp->print_all_marks();

	return 0;
}