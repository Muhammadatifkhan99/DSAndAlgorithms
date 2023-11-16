#include<iostream>
using namespace std;
class Student {
public:
public:
    int rollno {};
private:
    int age{};
    
public:
    void display(){
        cout<<"The age is: "<<age<<" "<<"The Roll Number is: "<<rollno<<endl;
    }
    
    int getAge(){
        return age;
    }
    void setAge(int a){
        age = a;
    }
    
};