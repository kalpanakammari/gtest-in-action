#include <gtest/gtest.h>
#include "TestChallenge.h"

//Stub - Fake Dependency
class NetworkAlerterStub:public INetworkAlerter{
public:
     int alert(float celcius) override{
       return 500;
            //
     }
};
TEST(NetworkAlerterTestSuits,StateBasedTest){
  NetworkAlerterStub stub;
  int failureCount alertInCelciusFascade(400,&stub);
  AssertEQ(failureCount,0);
}


