#include <iostream>

using namespace std;


class Student {
    int age {}; //by default every thing is private
public: // we need to specify public and after this everything will be public i.e accessible in other classes as well as in other places
    int rollno {};
    
    
    //Constructors
    Student(){
        cout<<"No-param constructor called"<<endl;
    }
    
    Student(int age){
       age = age;
        cout<<"One-param constructor called"<<endl;
    }
    Student(int age, int rollno){
        this.age = age;
        this.rollno = rollno;
        cout<<"Two-param constructor called"<<endl;
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
    Student s1;
    s1.display();
    
    Student s2(7654);
    s2.display();
    
    Student *s3 = new Student(4500,2300);
//    (*s3).setAge(45);
//    (*s3).setRollno(20000);
    s3->display();
    
    
    return 0;
}