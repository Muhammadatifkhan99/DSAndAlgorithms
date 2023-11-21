#include<iostream>
#include<cstring>
using namespace std;

class Fraction {
private:
    int numerator {};
    int denuminator {};
    
public:
    Fraction(int numerator,int denuminator){
        this->numerator = numerator;
        this->denuminator = denuminator;
    }
    
    void print(){
        cout<<numerator<<"/"<<denuminator<<endl;
    }
    
    void add(Fraction f2){
        int lcm = this->numerator * f2.denuminator;
        int x = lcm/denuminator;
        int y = lcm/f2.denuminator;
        int num = x*numerator + y*f2.numerator;
        
        //store result in f1
        this->numerator = num;
        this->denuminator = lcm;

        simplify();
    }
    void multiply(Fraction const &f2){
        numerator = numerator * f2.numerator;
        denuminator = denuminator*f2.denuminator;
        simplify();
    }
    
    void simplify(){
        int gcd = 1;
        int j = min(this->numerator,this->denuminator);
        cout<<j<<" This is the minimum value of numerator and denumerator"<<endl;
        for(int i{1};i<=j;i++){
            if(numerator%i == 0 && denuminator%i == 0){
                gcd = i;
            }
        }
        numerator = numerator/gcd;
        denuminator = denuminator/gcd;
    }
};


int main(){
    
    Fraction f1(10,2);
    Fraction f2(15,4);
    
    f1.add(f2);
    f1.print();
    f2.print();
    
    f1.multiply(f2);
    f1.print();
    f2.print();
    
    
    return 0;
}