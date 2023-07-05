#ifndef WHITELIST_CPP
#define WHITELIST_CPP

#include "whitelist.h"

whitelist::whitelist()
{
}
whitelist::whitelist(size_t size)
{
	student_data_list.reserve(size);
}
void whitelist::add_to_whitelist(const std::string &name, const student &data)
{
	student_data_list.push_back(data);
	student_record[name] = &student_data_list.back();
}
bool whitelist::is_student_present(const std::string &name)
{
	return student_record.count(name) > 0;
}
student *whitelist::get_student_data(const std::string &name)
{
	return student_record[name];
}

#endif