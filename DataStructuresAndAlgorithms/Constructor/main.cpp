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
    ~Student(){
        cout<<"Destructor called for: "<<this<<endl;
    }
};
    
    
int main(){
    
  
    Student s1(10,100);
    
    Student s2(20,200);
    
    Student *s3 = new Student(30,300);
    
    s2 = s1;
    *s3 = s2;
    s2 = *s3;
    
    delete s3;
    
    return 0;
}