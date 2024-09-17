#include"StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,add_emptyInputString_ZeroIsExpected){
//Arrange
  string input="";
  int expectedValue=0;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_oneInputString_OneIsExpected){
//Arrange
 string input="1";
int expectedValue=1;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_twoInputString_SumIsExpected){
//Arrange
 string input="1,2";
int expectedValue=3;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_threeInputString_SumIsExpected){
 string input="1,2,4";
int expectedValue=7;
int actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,when_delimited_with_newline_and_comma_SumIsExpected){
 string input="1\n2,4";
int expectedValue=7;
int actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,when_passed_a_delimiter_SumIsExpected){
 string input="//;\n2;4";
int expectedValue=6;
int actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,when_passed_negative_numbers_throws_an_exception_invalid_argument){
 string input="1,-2,-4,5";
int expectedValue=0;
ASSERT_THROW(Add(input),invalid_argument);
}

TEST(StringCalculatorTestSuite,when_passed_numbers_over_1000_SumIsExpected){
 string input="28,1001,1";
int expectedValue=29;
int actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,when_passed_multicharacter_delimiter_SumIsExpected){
 string input="//[***]\n8***4***3";
int expectedValue=15;
int actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,when_passed_multiple_delimiters_SumIsExpected){
 string input="//[*][%]\n4*2%3";
int expectedValue=9;
int actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,when_passed_multiple_multicharacter_delimiters_SumIsExpected){
 string input="//[**][%^]\n4**1%^9";
int expectedValue=14;
int actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}









