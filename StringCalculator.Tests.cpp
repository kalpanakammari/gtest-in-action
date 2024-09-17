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
int expectedValue=7;
int actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}



