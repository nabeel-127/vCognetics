#include <iostream>
#include "student.hpp"
#include "rakurai.hpp"

int main()
{
	rakurai::database db;
	std::shared_ptr<student> student1 = db.get_student_reference("BEE173059");
	if (student1)
	{
		std::cout << "Student Found!" << std::endl;
		std::cout << "Roll No: " << student1->get_roll_no() << std::endl;
		std::cout << "Age: " << student1->get_age() << std::endl;
		std::cout << "CGPA: " << student1->get_cgpa() << std::endl;
	}
	else
	{
		std::cout << "Student Not Found!" << std::endl;
	}
	return 0;
}