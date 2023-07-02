#ifndef WHITELIST_HPP
#define WHITELIST_HPP

#include <map>
#include <vector>
#include "student.hpp"

class whitelist
{
private:
	std::map<std::string, student *> student_record;
	std::vector<student> student_data_list;

public:
	void add_to_whitelist(std::string, student);
	bool is_student_present(std::string);
	student *get_student_data(std::string);
};

#endif