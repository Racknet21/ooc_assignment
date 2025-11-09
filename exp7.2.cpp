#include <iostream> 
using namespace std; 
// Base class: Person
 class Person{ 
    public: 
    Person(){ 
cout <<"Person's constructor called" << endl; 
    }
};
// Dcrived class 1: Faculty 
class Faculty : public Person {
public: 
Faculty(){
cout << "Faculty's constructor called" << endl; 
}
};
// Derived class 2: Student 
class Student : public Person {
public: 
Student(){
cout << "Student's constructor called" << endl; 
}
};
//Derived class 3: TA (inherits from both Faculty and Student)
 class TA: public Faculty, public Student {
     public: 
TA(){
cout<< "TA's constructor called"<< endl;
}
 };
int main() {
    cout<<"Name: Samruddhi M Suryawanshi"<<endl;
    cout<<"div: B"<<endl;
    cout<<"Roll No: 42"<<endl;
TA ta; // Creating an object of TA
 return 0;
}