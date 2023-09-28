#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int a {5};
    int b {4};
    
    int temp {0};
    
    cout<<"Numbers before swapping:"<<a<<" "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    
    cout<<"Numbers after swapping:"<<a<<" "<<b<<endl;
    
    //using XOR the bitwise operator to swap two values 
    
    a = a^b;    //a = a^b 
    b = a^b;    //b = a^b^b b is cancelled with b
    a = a^b;    //a = a^b^a a is cancelled with a, so a remains and values are swapped 
    cout<<a<<" "<<b<<endl;
    
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    
    cout<<endl;
    return 0;
}