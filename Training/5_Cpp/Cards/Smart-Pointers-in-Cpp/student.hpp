#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
#include <map>

class student
{
private:
	struct student_record
	{
		std::string student_name;
		std::string roll_no;
		int age;
		float cgpa;
	} current_student;
	std::map<std::string, int> result;
public:
	void set_subject_marks(std::string _subject, int _marks);
	int get_subject_marks(std::string _subject);
	void print_all_marks();
	void set_student_name(std::string _student_name);
	std::string get_student_name();
	void set_roll_no(std::string _roll_no);
	std::string get_roll_no();
	void set_age(float _age);
	float get_age();
	void set_cgpa(float _cgpa);
	float get_cgpa();
};

#endif