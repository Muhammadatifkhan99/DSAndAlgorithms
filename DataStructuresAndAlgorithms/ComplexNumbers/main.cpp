#include<iostream>
using namespace std;

class Complex {
private:
    int real {};
    int imaginary{};
public:
    Complex(int real,int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }

    void add (Complex const& c2){
        real = real + c2.real;
        imaginary= imaginary + c2.imaginary;
    }
    void print(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
    void multiply(Complex const& c2){
        real = (real * c2.real) - (imaginary * c2.imaginary);
        imaginary = (real * c2.imaginary) + (imaginary * c2.real);
    }
};

int main(){
    Complex c1(3,4);
    Complex c2(2,5);
    c1.add(c2);
    c1.print();
//    c1.multiply(c2);
//    c1.print();
//    return 0;
}