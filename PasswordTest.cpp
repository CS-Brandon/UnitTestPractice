/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	//single char test with lower or upper 'z'? add scinario based func for that
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}


//adding another test cases here for when the single letter is lowercase:
TEST(PasswordTest, single_letter_passwd) {
  Password my_password;
  int actual = my_password.count_leading_characters("z");
  ASSERT_EQ(1, actual);
}



//add more here for multiple letters with lowr, upper, and mixed letter cases.
TEST(PasswordTest, all_lower_case) {
  Password my_password;
  bool actual = my_password.has_mixed_case("password");
  ASSERT_FALSE(actual);
}

TEST(PasswordTest, all_upper_case) {
  Password my_password;
  bool actual = my_password.has_mixed_case("PASSWORD");
  ASSERT_FALSE(actual);
}

TEST(PasswordTest, mixed_case) {
  Password my_password;
  bool actual = my_password.has_mixed_case("PassWord");
  ASSERT_TRUE(actual);
}

