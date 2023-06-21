#ifndef _STUDENT_H
#define _STUDENT_H

#include <string>
#include <map>

class student
{
private:
	struct student_record
	{
		std::string roll_no;
		int age;
		float cgpa;
	};

	std::map<std::string /*subject name*/, int /*marks*/> result;

public:
	int get_subject_marks(std::string subject);
	void set_subject_marks(std::string subject, int marks);
	void print_all_marks();

	/*
	Implement your get and set functions here to read/write the roll_no,
	age and cgpa.
	You can declare any private variables too if necessary.
	*/
};

#endif