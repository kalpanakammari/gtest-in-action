#include <stdio.h>
#include <assert.h>
#include"TestChallenge.h"
 
int alertFailureCount = 0;

int getFailureCount(){
return alertFailureCount;
}
 
//int networkAlerter(float celcius) {                          //real world alerter function
   //Communicate with Network, Require Internet Connectivity and credentials
  //If Communication is successfull , returns 200 otherwise 500
   // return 500;
//}
 
void alertInCelcius(float farenheit,INetworkAlerter *networkAlerterPtr) {
    float celcius = (farenheit - 32) * 5 / 9;
    int returnCode = networkAlerterPtr->alert(celcius);
    if (returnCode != 200) {
        //alertFailureCount += 0;
         alertFailureCount += 1;
    }
}

int alertInCelciusFacade(float farenheit, INetworkAlerter *networkAlerterPtr){
alertInCelcius(farenheit,networkAlerterPtr);
 return getFailureCount();
 }
 
