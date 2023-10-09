#ifndef STUDENT_CPP
#define STUDENT_CPP

#include "student.h"

void student::set_subject_marks(const std::string& subject, int marks)
{
	result[subject] = marks;
}
int student::get_subject_marks(const std::string& subject)
{
	return result[subject];
}
void student::print_all_marks()
{
	for (const auto &pair : result)
	{
		std::cout << "Subject: " << pair.first << ", Marks: " << pair.second << std::endl;
	}
}
void student::set_roll_no(const std::string& roll_no)
{
	current_student.roll_no = roll_no;
}
std::string student::get_roll_no()
{
	return current_student.roll_no;
}
void student::set_age(float age)
{
	current_student.age = age;
}
float student::get_age()
{
	return current_student.age;
}
void student::set_cgpa(float cgpa)
{
	current_student.cgpa = cgpa;
}
float student::get_cgpa()
{
	return current_student.cgpa;
}

#endif