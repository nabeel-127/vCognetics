#include <iostream>
#include <vector>
#include "../include/rakurai.h"

using namespace rakurai;

database::database()
{
	std::string roll_no[5] = {"BEE173059", "BEE173060", "BEE173061", "BEE173062", "BEE173063"};
	std::string student_name[5] = {"Nabeel", "Ali", "Ahmed", "Hazim", "Yasin"};
	for (int i = 0; i < 5; i++)
	{
		std::shared_ptr<student> current_student = std::make_shared<student>();
		current_student->set_student_name(student_name[i]);
		current_student->set_roll_no(roll_no[i]);
		current_student->set_age(25);
		current_student->set_cgpa(3.5);
		current_student->set_subject_marks("English", 50 + i);
		current_student->set_subject_marks("Physics", 90 + i);
		student_list.push_back(current_student);
	}
}

std::shared_ptr<student> database::get_student_reference_1(std::string _student_name)
{
	for (auto it = student_list.begin(); it != student_list.end(); ++it)
	{
		if ((*it)->get_student_name() == _student_name)
		{
			return *it;
		}
	}
	return nullptr;
}

std::unique_ptr<student> database::get_student_reference_2(std::string _student_name)
{
	// std::shared_ptr<student> shared_student = get_student_reference_1(_student_name);
	// if (shared_student)
	// {
	// 	std::unique_ptr<student> unique_student = std::make_unique<student>(*shared_student);
	// 	return unique_student;
	// }
	for (std::vector<std::shared_ptr<student>>::iterator it = student_list.begin(); it != student_list.end(); ++it)
	{
		if ((*it)->get_student_name() == _student_name)
		{
			std::unique_ptr<student> unique_student = std::make_unique<student>(**it);
			return unique_student;
		}
	}
	return nullptr;
}