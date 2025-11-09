#include <iostream> 
using namespace std;
//first base class 
class Vehicle {
public:
 Vehicle() { cout << "This is a Vehicle\n"; }
};
//second base class 
 class FourWheeler{
  public:
   FourWheeler() { cout << "This is a 4 Wheeler\n"; }
};
//subclass derived from two base classes
class Car: public Vehicle, public FourWheeler{
     public:
Car(){ cout << "This 4 Wheeler Vehicle is a Car\n";}
};
// main function 
int main(){
    cout<<"Name: Samruddhi M Suryawanshi"<<endl;
    cout<<"div: B"<<endl;
    cout<<"Roll No: 42"<<endl;
//Creating object of subelass will 
// invoke the constructor of base classes.
 Car obj;
 return 0;
}