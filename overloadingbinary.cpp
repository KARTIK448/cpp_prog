#include<iostream>
using namespace std;
class Complex{
    private:
    double real,imag;
    public:
    Complex(double r=0,double i=0):real(r),imag(i){}
    Complex operator +(const Complex& other)const{
        Complex result;
        result.real=real+other.real;
        result.imag=imag+other.imag;
        return result;
    }
     Complex operator -(const Complex& other)const{
        Complex result;
        result.real=real-other.real;
        result.imag=imag-other.imag;
        return result;
    }
      Complex operator *(const Complex& other)const{
        Complex result;
        result.real=(real*other.real)-(imag*other.imag);
        result.imag=(real*other.imag)+(imag*other.real);
        return result;
    }
    Complex operator /(const Complex& other)const{
        Complex result;
        double denom=(other.real*other.real)+(other.imag*other.imag);
        result.real=((real*other.real)+(imag*other.imag))/denom;
        result.real=((imag*other.real)-(real*other.imag))/denom;
        return result;

    }
    void display(){
        cout<<real<<"+"<<imag<<"i"  ;}

};
int main(){
    Complex c1(1,3),c2(2,3),result;
    int ch;
    cout<<"enter the operation to perform\n 1) addition \n2) subtraction\n3) multiplication\n4) division\n5) exit"<<endl;
    cin>>ch;
 
    switch(ch){
        case 1:
        result=c1+c2;
        cout<<"addition is: ";
        result.display();
        break;
        case 2:
        result=c1-c2;
        cout<<"subtraction is: ";
        result.display();
        break;
        case 3:
        result =c1*c2;
        cout<<"multiplication is: ";
        result.display();
        break;
        case 4:
        result=c1/c2;
        cout<<"division is: ";
        result.display();
        break;
        case 5:
        break;

    }

}