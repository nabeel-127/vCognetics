#include <iostream>
#include "../include/student.h"
#include "../include/rakurai.h"

void print_student_record(std::unique_ptr<student> &_my_student)
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
	std::unique_ptr<student> my_student1 = db.get_student_reference_2("Ali");
	std::unique_ptr<student> my_student2 = db.get_student_reference_2("Nabeel");
	std::unique_ptr<student> my_student3 = db.get_student_reference_2("Ahmed");
	std::unique_ptr<student> my_student4 = db.get_student_reference_2("asda");

	if (my_student1)
	{
		// std::cout << "Student Found!" << std::endl;
		// std::cout << "Roll No: " << my_student->get_roll_no() << std::endl;
		// std::cout << "Age: " << my_student->get_age() << std::endl;
		// std::cout << "CGPA: " << my_student->get_cgpa() << std::endl;
		print_student_record(my_student1);
	}
	else
	{
		std::cout << "Student1 Not Found!" << std::endl;
	}
	if (my_student2)
		print_student_record(my_student2);
	else
		std::cout << "Student2 Not Found!" << std::endl;
	if (my_student3)
		print_student_record(my_student3);
	else
		std::cout << "Student3 Not Found!" << std::endl;
	if (my_student4)
		print_student_record(my_student4);
	else
		std::cout << "Student4 Not Found!" << std::endl;

	return 0;
}