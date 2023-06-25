#include <iostream>
#include "student.hpp"
#include "rakurai.hpp"

int main()
{
	rakurai::database db;
	std::shared_ptr<student> my_student = db.get_student_reference_2("Nabeel");
	if (my_student)
	{
		std::cout << "Student Found!" << std::endl;
		std::cout << "Roll No: " << my_student->get_roll_no() << std::endl;
		std::cout << "Age: " << my_student->get_age() << std::endl;
		std::cout << "CGPA: " << my_student->get_cgpa() << std::endl;
	}
	else
	{
		std::cout << "Student Not Found!" << std::endl;
	}
	return 0;
}