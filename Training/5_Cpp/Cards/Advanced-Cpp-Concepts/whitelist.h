#ifndef WHITELIST_HPP
#define WHITELIST_HPP

#include <map>
#include <vector>
#include <deque>
#include "student.h"

class whitelist
{
private:
	std::map<std::string, student *> student_record;
	std::vector<student> student_data_list;
	//std::deque<student> student_data_list;

public:
	whitelist();
	whitelist(size_t size);
	void add_to_whitelist(const std::string&, const student&);
	bool is_student_present(const std::string&);
	student* get_student_data(const std::string&);
};

#endif