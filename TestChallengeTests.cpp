#include <gtest/gtest.h>
#include "TestChallenge.h"
#include<gmock/gmock.h>
using testing:FloatEq;


//Stub - Fake Dependency
class NetworkAlerterStub:public INetworkAlerter{
public:
     int alert(float celcius) override{
       return 500;
            //
     }
};
//Mock implementation using Gmock
class NetworkAlertMock:public INetworkAlerter{
public:
MOCK_METHOD(int alert,(float celcius));
};


TEST(NetworkAlerterTestSuits,StateBasedTest){
  NetworkAlerterStub stub;
  int failureCount= alertInCelciusFacade(400,&stub);
  ASSERT_EQ(failureCount,1);
}
TEST(NetworkAlerterTestSuits,InteractionTest){
  NetworkAlerterMock mock;
     //EXCEPT_CALL (mockObject,method(Matcher).Times(Frequency).WillOnce/Repeat(Action)
     
     EXPECT_CALL(mock,alertEq(FloatEq(204,44))).Times(1).WillOnce(Return(500));
  int failureCount= alertInCelciusFacade(400,&mock);
  ASSERT_EQ(failureCount,1);
}


