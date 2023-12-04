#include<iostream>
using namespace std;

class Student {
private:
    int const rollNumber {};
public:
    int age {};
    
    Student(int r,int age):rollNumber(r),age(age){
        
    }
    
    };
    
    
int main(){
    Student s1(12,2323);
    
    
    
    return 0;
}