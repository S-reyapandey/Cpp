#include <iostream>
#include <string.h>

using namespace std;

class Address {
    public: 
      string streetLine, city, state;

      Address (string streetLine, string city, string state){
        this->streetLine = streetLine;
        this->city = city;
        this->state = state;
      }

};

class Identity {
      Address* address;
    public:
      string name;
      Identity(string name, Address* address){
        this->name = name;
        this->address = address;
      }

      void display(){
        cout << name << "  " << address->streetLine << " " << address->city << " " << address->state << " " << endl;
      }
};

int main(){
    
    Address A1 = Address("1368/2B, Behind Hydel Colony,", "Sultanpur,", "Uttar Pradesh");
    Address A2 = Address("MNIT,", "Jaipur,", "Rajasthan");
    Identity I1 = Identity("Shreya", &A1);
    Identity I2 = Identity( "Khushi", &A2);
    I1.display();
    I2.display();

    return 0;
}