// void alertInCelcius(float farenheit);
// int getFailureCount();

//Abstraction using class interface
//functionpointer
class INetworkAlerter{
public:
     virtual void alert(float celcius)=0; //virtual is used the function pointer which is created by compiler
};

int alertInCelciusFacade(float farenheit,INetworkAlerter *networkAlerterPtr);
