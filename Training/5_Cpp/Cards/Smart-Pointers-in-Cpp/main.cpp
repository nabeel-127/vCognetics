#include <iostream>
#include "student.hpp"
#include "rakurai.hpp"

void print_student_record(std::unique_ptr<student>& _my_student)
{
	std::cout << "Name: " << _my_student->get_student_name() << std::endl;
	std::cout << "Roll No: " << _my_student->get_roll_no() << std::endl;
	std::cout << "Age: " << _my_student->get_age() << std::endl;
	std::cout << "CGPA: " << _my_student->get_cgpa() << std::endl;
	_my_student->print_all_marks();
}

int main()
{
	rakurai::database db;
	// std::shared_ptr<student> my_student = db.get_student_reference_1("Nabeel");
	std::unique_ptr<student> my_student = db.get_student_reference_2("Ali");
	if (my_student)
	{
		// std::cout << "Student Found!" << std::endl;
		// std::cout << "Roll No: " << my_student->get_roll_no() << std::endl;
		// std::cout << "Age: " << my_student->get_age() << std::endl;
		// std::cout << "CGPA: " << my_student->get_cgpa() << std::endl;
		print_student_record(my_student);
	}
	else
	{
		std::cout << "Student Not Found!" << std::endl;
	}
	return 0;
}