#include <iostream>
#include "student.h"
#include "database.h"

void print_student_record(std::unique_ptr<student> &my_student)
{
	if (my_student)
	{
		std::cout << "Name: " << my_student->get_student_name() << std::endl;
		std::cout << "Roll No: " << my_student->get_roll_no() << std::endl;
		std::cout << "Age: " << my_student->get_age() << std::endl;
		std::cout << "CGPA: " << my_student->get_cgpa() << std::endl;
		my_student->print_all_marks();
	}
}
void print_student_record(std::shared_ptr<student> &my_student)
{
	if (my_student)
	{
		std::cout << "Name: " << my_student->get_student_name() << std::endl;
		std::cout << "Roll No: " << my_student->get_roll_no() << std::endl;
		std::cout << "Age: " << my_student->get_age() << std::endl;
		std::cout << "CGPA: " << my_student->get_cgpa() << std::endl;
		my_student->print_all_marks();
	}
}

int main()
{
	rakurai::training::database db;
	std::shared_ptr<student> my_student1 = db.get_student_reference_1("Ali");
	std::shared_ptr<student> my_student2 = db.get_student_reference_1("Nabeel");
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