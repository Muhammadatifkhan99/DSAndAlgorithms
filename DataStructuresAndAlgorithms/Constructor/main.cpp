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
    /*
    Student s1;
    s1.display();
    
    Student s2(7654);
    s2.display();
    
    Student *s3 = new Student(4500,2300);
//    (*s3).setAge(45);
//    (*s3).setRollno(20000);
    s3->display();
    */
    
    Student s(12);
    cout<<"Address of s: "<<&s<<endl;
    s.display();
    
    
    Student s1(10,1000);
    cout<<"Address of s1: "<<&s1<<endl;
    s1.display();
    
    Student s2(20,2000);
    cout<<"Address of s2: "<<&s2<<endl;
    s2.display();
    
    return 0;
}