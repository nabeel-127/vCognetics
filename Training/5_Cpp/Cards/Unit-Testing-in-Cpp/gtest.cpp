#include "whattotest.h"
#include "whitelist.h"
#include "student.h"
#include <gtest/gtest.h>

TEST(SquareRootTest, PositiveNos)
{
	ASSERT_EQ(6, squareRoot(36.0));
	ASSERT_EQ(18.0, squareRoot(324.0));
	ASSERT_EQ(25.4, squareRoot(645.16));
	ASSERT_EQ(0, squareRoot(0.0));
}

TEST(SquareRootTest, NegativeNos)
{
	ASSERT_EQ(-1.0, squareRoot(-15.0));
	ASSERT_EQ(-1.0, squareRoot(-0.2));
}

TEST(MainTest, maintest)
{
	student my_students[20], *temp = NULL;
	whitelist whitelisted(16);
	std::string roll_no[20] = {"BEE173059", "BEE173060", "BEE173061", "BEE173062", "BEE173063", "BEE173064", "BEE173065", "BEE173066", "BEE173067", "BEE173069", "BEE173070", "BEE173071", "BEE173072", "BEE173073", "BEE173074", "BEE173075", "BEE173076", "BEE173077", "BEE173078", "BEE173079"};
	std::string student_name[16] = {"Nabeel", "Ahmed", "Ali", "Abdullah", "Usman", "Omar", "Ibrahim", "Bilal", "Hamza", "Yusuf", "Tariq", "Zain", "Suleman", "Rashid", "Farhan", "Khalid"};
	for (int i = 0; i < 20; i++)
	{
		my_students[i].set_roll_no(roll_no[i]);
		my_students[i].set_age(21 + i);
		my_students[i].set_cgpa(3.5 + (float(i) / 10));
		my_students[i].set_subject_marks("mathematics", 50 + i);
		my_students[i].set_subject_marks("physics", 60 + i);
		my_students[i].set_subject_marks("science", 70 + i);
		my_students[i].set_subject_marks("history", 80 + i);
	}

	for (int i = 0; i < 16; i++)
	{
		whitelisted.add_to_whitelist(student_name[i], my_students[i]);
	}

	ASSERT_EQ(1, whitelisted.is_student_present("Nabeel"));
	ASSERT_EQ(0, whitelisted.is_student_present("abc"));

	ASSERT_EQ("BEE173059", my_students[0].get_roll_no());
	ASSERT_EQ("BEE173060", my_students[1].get_roll_no());

	// temp = whitelisted.get_student_data("Ali");
	// temp->print_all_marks();
}

int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
