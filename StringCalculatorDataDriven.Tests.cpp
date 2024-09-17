#include "StringCalculator.h"
#include <gtest/gtest.h>

class TestPair{
public:
string input;
int expectedValue;
TestDataPair(string_input,int_expectedValue) :input{_input},expectedValue{_expectedValue}{
}
};

TEST(StringCalculatorDataDrivenTestSuite,DataDrivenTestCase){
vector<TestPair> datalist;
TestPair pair_one {"",0};
TestPair pair_two {"0",0};
TestPair pair_three {"1",1};
TestPair pair_four {"1,2",3};
TestPair pair_five {"1,2,3",6};

datalist.push_back(pair_one);
datalist.push_back(pair_two);
datalist.push_back(pair_three);
datalist.push_back(pair_four);
datalist.push_back(pair_five);

//Iterate using a range-baised for-loop
  for (TestPair dataPair : datalist){
  int actualValue=Add(dataPair.input);
  ASSERT_EQ(actualValue,dataPair.expectedValue);
}

}



