#include <iostream>
#include "student.h"
#include "whitelist.h"

int main()
{
	student my_students[20], *temp = NULL;
	whitelist whitelisted(3);
	std::string roll_no[20] = {"BEE173059", "BEE173060", "BEE173061", "BEE173062", "BEE173063", "BEE173064", "BEE173065", "BEE173066", "BEE173067", "BEE173069", "BEE173070", "BEE173071", "BEE173072", "BEE173073", "BEE173074", "BEE173075", "BEE173076", "BEE173077", "BEE173078", "BEE173079"};
	std::string student_name[16] = {"Nabeel", "Ahmed", "Ali", "Abdullah", "Usman", "Omar", "Ibrahim", "Bilal", "Hamza", "Yusuf", "Tariq", "Zain", "Suleman", "Rashid", "Farhan", "Khalid"};
	for (int i = 0; i < 20; i++)
	{
		my_students[i].set_roll_no(roll_no[i]);
		my_students[i].set_age(21 + i);
		my_students[i].set_cgpa(3.5 + (float(i) / 10));
		my_students[i].set_subject_marks("mathematics", 50 + i);
		my_students[i].set_subject_marks("physics", 60 + i);
		my_students[i].set_subject_marks("science", 70 + i);
		my_students[i].set_subject_marks("history", 80 + i);
	}

	for (int i = 0; i < 16; i++)
	{
		whitelisted.add_to_whitelist(student_name[i], my_students[i]);
	}

	for (int i = 0; i < 16; i++)
	{
		std::cout << "Is Student Present: " << whitelisted.is_student_present(student_name[i]) << std::endl;
	}
	std::cout << "Is Student Present: " << whitelisted.is_student_present("incorrectname") << std::endl;

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