#include <iostream>
#include <vector>
#include "rakurai.hpp"

using namespace rakurai;

database::database()
{
	std::string roll_no[5] = {"BEE173059", "BEE173060", "BEE173061", "BEE173062", "BEE173063"};
	for (int i = 0; i < 5; i++)
	{
		std::shared_ptr<student> current_student = std::make_shared<student>();
		current_student->set_roll_no(roll_no[i]);
		current_student->set_age(25);
		current_student->set_cgpa(3.5);
		current_student->set_subject_marks("English", 50 + i);
		current_student->set_subject_marks("Physics", 90 + i);
		student_list.push_back(current_student);
	}
}

std::shared_ptr<student> database::get_student_reference(std::string _roll_no)
{
	
	for (auto it = student_list.begin(); it != student_list.end(); ++it)
	{
		std::cout << (*it)->get_roll_no() << std::endl;
		if ((*it)->get_roll_no() == _roll_no)
		{
			return *it; // Return the shared pointer to the found student
		}
	}
	return nullptr;
}