#include "whattotest.h"
#include "whitelist.hpp"
#include "student.hpp"
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
	student my_students[2], *temp;
	whitelist whitelisted;
	my_students[0].set_roll_no("BEE173059");
	my_students[0].set_age(21);
	my_students[0].set_cgpa(3.5);
	my_students[0].set_subject_marks("mathematics", 50);
	my_students[0].set_subject_marks("physics", 60);
	my_students[0].set_subject_marks("science", 70);
	my_students[0].set_subject_marks("history", 80);

	my_students[1].set_roll_no("BEE173060");
	my_students[1].set_age(21);
	my_students[1].set_cgpa(3.5);
	my_students[1].set_subject_marks("mathematics", 55);
	my_students[1].set_subject_marks("physics", 65);
	my_students[1].set_subject_marks("science", 75);
	my_students[1].set_subject_marks("history", 85);

	whitelisted.add_to_whitelist("Nabeel", my_students[0]);
	whitelisted.add_to_whitelist("Ali", my_students[1]);

	ASSERT_EQ(1, whitelisted.is_student_present("Nabeel"));

	// temp = whitelisted.get_student_data("Ali");
	// temp->print_all_marks();
}

int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
