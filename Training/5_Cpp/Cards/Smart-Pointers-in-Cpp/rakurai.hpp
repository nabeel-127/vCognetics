#pragma once

#include <vector>
#include <memory>
#include "student.hpp"

namespace rakurai
{
	class database
	{
		std::vector<std::shared_ptr<student>> student_list;
	public:
		database();
		std::shared_ptr<student> get_student_reference_1(std::string student_name);
		std::unique_ptr<student> get_student_reference_2(std::string _student_name);
	};
}