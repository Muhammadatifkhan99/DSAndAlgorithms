#include<iostream>
using namespace std;

class Student{
private:
public:
    int rollNumber {};
    int age {};
    static int totalStudents;
    
    Student(){
        
        totalStudents ++;
    }
    
    static int getTotalStudents(){
        return totalStudents;
    }
    
};

int Student::totalStudents = 0;


int main(){
    Student s1;
    Student s2,s3,s4,s5;
    Student s6,s7,s8,s9;
    
    cout<<Student::totalStudents<<endl;
    
    cout<<"static function: "<<Student::getTotalStudents()<<endl;
    return 0;
}