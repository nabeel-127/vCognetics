#ifndef STUDENT_H
#define STUDENT_H

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
	student();
	~student();

	void set_subject_marks(std::string subject, int marks);
	int get_subject_marks(std::string subject);
	void print_all_marks();
	void set_roll_no(std::string _roll_no);
	std::string get_roll_no();
	void set_age(float _age);
	float get_age();
	void set_cgpa(float _cgpa);
	float get_cgpa();

	/*
	Implement your get and set functions here to read/write the roll_no,
	age and cgpa.
	You can declare any private variables too if necessary.
	*/
};

#endif