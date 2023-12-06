#include<iostream>
#include<cstring>
using namespace std;

class Fraction {
private:
    int numerator {};
    int denuminator {};
    
public:
    Fraction(){}
    Fraction(int numerator,int denuminator){
        this->numerator = numerator;
        this->denuminator = denuminator;
    }
    int getNumerator()const{
        return numerator;
    }
    int getDenuminator() const{
        return denuminator;
    }
    void setNuminator(int n){
        numerator = n;
    }
    void setDenuminator(int d){
        denuminator = d;
    }
    
    void print(){
        cout<<numerator<<"/"<<denuminator<<endl;
    }
    
    Fraction add(Fraction const &f2){
        int lcm = this->numerator * f2.denuminator;
        int x = lcm/denuminator;
        int y = lcm/f2.denuminator;
        int num = x*numerator + y*f2.numerator;
        
        //store result in f1
//        this->numerator = num;
//        this->denuminator = lcm;
        Fraction fnew(num,lcm);
        fnew.simplify();
        return fnew;
    }
    
    Fraction operator+(Fraction const &f2){
        int lcm = this->numerator * f2.denuminator;
        int x = lcm/denuminator;
        int y = lcm/f2.denuminator;
        int num = x*numerator + y*f2.numerator;
        
        //store result in f1
//        this->numerator = num;
//        this->denuminator = lcm;
        Fraction fnew(num,lcm);
        fnew.simplify();
        return fnew;
    }
    void multiply(Fraction const &f2){
        numerator = numerator * f2.numerator;
        denuminator = denuminator*f2.denuminator;
        simplify();
    }
    Fraction operator*(Fraction const &f2){
        int n = numerator * f2.numerator;
        int d = denuminator * f2.denuminator;
        
        Fraction fnew(n,d);
        fnew.simplify();
        return fnew;
    }
    
    bool operator==(Fraction const &f2){
        return(numerator == f2.numerator && denuminator == f2.denuminator);
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
    
    void operator++ (){
        numerator = numerator + denuminator;
        simplify();
    }
    
};


int main(){
    
    Fraction f1(10,2);
    Fraction f2(15,4);
    f1.print();
    ++f1;
    f1.print();
//    Fraction f3;
//    Fraction f4;
//    
//    f3 = f1.add(f2);
//    f4 = f1 * f2;
//    
//  
//     
     f1.print();
//     f2.print();
//     f3.print();
//     f4.print();
//     
//      if(f1 == f1){
//        cout<<"Equal"<<endl;
//    }
//    else
//        cout<<"Not Equal"<<endl;
    
    
//    cout<<f3.getDenuminator()<<f3.getNumerator()<<endl;
    
    return 0;
}