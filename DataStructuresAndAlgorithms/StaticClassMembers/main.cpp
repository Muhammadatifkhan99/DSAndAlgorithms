#include<iostream>
using namespace std;

class Student{
private:
public:
    int rollNumber {};
    int age {};
    static int totalStudents;
    
};

int Student::totalStudents = 100;


int main(){
    Student s1;
    cout<<s1.rollNumber<<" "<<s1.age<<endl;
    
    cout<<s1.totalStudents<<endl;
    s1.totalStudents = 20;
    
    Student s2;
    cout<<s2.totalStudents<<endl;
    
    cout<<Student::totalStudents<<endl;
    return 0;
}