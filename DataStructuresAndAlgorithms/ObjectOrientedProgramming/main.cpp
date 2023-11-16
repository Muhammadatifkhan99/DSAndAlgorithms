#include<iostream>
#include "Student.cpp"
using namespace std;

//class Student {
//    public:
//  int rollno {};
//  int age {};
//};
//class Product{
//    int id {};
//    int weight {};
//    string product_name {};
//    };

int main(){
    
    int *a = new int;
    *a = 5;
    cout<<"This is the memory address of "<<*a<<" : "<<a<<endl;
    cout<<"The content of this address "<<a<<" is: "<<*a<<endl;
    
    //Creating objects statically
    
    cout<<"These are objects created statically"<<endl;
    
    Student s1;
    Student s2;
    Student s3,s4,s5;
    
    s1.rollno = 11;
    cout<<"Displaying age with getAge() "<<s1.getAge()<<endl;
//    s1.age = 21;
    cout<<s1.rollno<<endl;
//    cout<<s1.age<<endl;
    
    //creating objects dynamically 
    
    
    cout<<"These are objects created dynamically on the heap"<<endl;
    Student *s6 = new Student;
    
//    (*s6).age = 23;
    cout<<"Displaying age with getAge() "<<(*s6).getAge()<<endl;
    (*s6).rollno = 200;
    
//    cout<<(*s6).age<<endl;
    cout<<(*s6).rollno<<endl;
    
//    s6->age = 222;
    cout<<"Displaying age of s6 with getAge() "<<s6->getAge()<<endl;
    s6->rollno = 3000;
    
//    cout<<s6->age<<endl;
    cout<<s6->rollno<<endl;
    
    cout<<"SETTERS"<<endl;
    s6->setAge(100);
    s6->display();
    

}