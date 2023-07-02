#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
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
	} current_student;

	std::map<std::string, int> result;

public:
	void set_subject_marks(const std::string& subject, int marks);
	int get_subject_marks(const std::string& subject);
	void print_all_marks();
	void set_roll_no(const std::string& roll_no);
	std::string get_roll_no();
	void set_age(float age);
	float get_age();
	void set_cgpa(float cgpa);
	float get_cgpa();
};

#endif