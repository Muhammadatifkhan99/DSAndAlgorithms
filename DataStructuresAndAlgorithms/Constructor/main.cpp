#include <iostream>
using namespace std;


class Student {
    int age {}; //by default every thing is private
public: // we need to specify public and after this everything will be public i.e accessible in other classes as well as in other places
    int rollno {};
    
    
    //Constructors
//    Student(){
//        cout<<"No-param constructor called"<<endl;
//    }
//    
    Student(int age){
       this->age = age;
        cout<<"One-param constructor called"<<endl;
        cout<<"Address of the this: "<<this<<endl;
    }
    Student(int a, int r){
        age = a;
        rollno = r;
        cout<<"Two-param constructor called"<<endl;
        cout<<"Address of this keyword: "<<this<<endl;
    }
    
    int getAge(){
        return age;
        }
    void setAge(int a){
        age = a;
    }
    void setRollno(int r){
        rollno = r;
    }
    void display(){
        cout<<"The rollno is: "<<rollno<<" and age is: "<<age<<endl;
    }
};
    
    
int main(){
    
    Student s1(10,100);
    cout<<"S1 is: ";
    s1.display();
    
    Student s2(s1);
    cout<<"S2 is: ";
    s2.display();
    
    
    //Creating objects dynamically
    Student *s3 = new Student(20,200);
    cout<<"S3 is: ";
    s3->display();
    
    Student s4(*s3);
    cout<<"S4 is: ";
    s4.display();
    Student *s5 = new Student(*s3);
    cout<<"S5 is: ";
    s5->display();
    Student *s6 = new Student(s1);
    cout<<"S6 is: ";
    s6->display();
    
    
    return 0;
}