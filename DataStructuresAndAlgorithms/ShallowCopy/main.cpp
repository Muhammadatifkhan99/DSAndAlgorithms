#include<iostream>
using namespace std;

class Student {
    int age {};
    char *name;
public:
    Student(int age,char *name){
        this->age = age;
        this->name =name;
    }
    void display(){
        cout<<name<<" "<<age<<endl;
    }
};
int main(){
    char name [] = {"Atif"};
    Student s1(30,name);
    s1.display();
    //This programs performs a shallow copy of the name which in simple terms can be
    //called as address from where the data was read and in response changes were made back
    //their immediatly............
    /*Both the objects are pointing to the same array and when one object changes something it is 
     reflected in the other...
      * 
      * 
      * 
      * 
      * 
      * AS SHALLOW COPY BASICALLY MEANS COPY THE ADDRESS ONLY*/
    name[3] = 'e';
    Student s2(20,name);
    s2.display();
    
    
    
    return 0;
}