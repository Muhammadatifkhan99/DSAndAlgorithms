#include<iostream>

using namespace std;

int main(){
    int a {5};
    //Constant variables in c++ must be initialized at time of creation
//    int const d;
    //This is also required for reference variables, we need to initialize them at time 
    //of creation
//    int &j;
    const int c {33};
    int const b {4};
    cout<<a<<" "<<b<<" "<<c<<endl;
    
    return 0;
}