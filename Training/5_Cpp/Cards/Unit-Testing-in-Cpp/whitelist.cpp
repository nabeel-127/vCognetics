#ifndef WHITELIST_CPP
#define WHITELIST_CPP

#include "whitelist.hpp"

void whitelist::add_to_whitelist(std::string name, student data)
{
	student_data_list.push_back(data);
	student_record[name] = &student_data_list.back();
}
bool whitelist::is_student_present(std::string name)
{
	return student_record.count(name) > 0;
}
student *whitelist::get_student_data(std::string name)
{
	return student_record[name];
}

#endif