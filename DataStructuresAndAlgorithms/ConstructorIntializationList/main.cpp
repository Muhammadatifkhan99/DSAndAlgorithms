#include<iostream>

using namespace std;
class Student{
public:
    int age{};
    int const rollNumber{};
    int &x; //reference variable
    //initialization list can also be used for reference variables
    Student(int r,int a):rollNumber(r),age(a),x(this->age) {   //can be used for normal data members also
//        rollNumber = r; This is error becasuse before reaching line 7 the object is already
// created and we cannot initialize this variable because of const qualifier...we can solve this issue with initializer list
        
    }
    
    };
int main(){
    Student s1(10,100);
    
    
    
    
//    int a {5};
    //Constant variables in c++ must be initialized at time of creation
//    int const d;
    //This is also required for reference variables, we need to initialize them at time 
    //of creation
//    int &j;
//    const int c {33};
//    int const b {4};
//    cout<<a<<" "<<b<<" "<<c<<endl;
    
    //Reference Variables
//    int i{5};
//    int &j{i};
    /* we can not write the above statement like this
        int &j;
         * j = i;
         * for reference variables and for constant we have to initialize them at time of 
         * their creation,other wise will get errors....
         
          * */
    
    return 0;
}