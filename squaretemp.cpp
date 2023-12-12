#include<iostream>
using namespace std;

template<typename T>
T sqaurecalculate(const T& num){
   return num*num;
}
int main(){
    int num;
    float num1;
    int ch;
    cout<<"enter the type of number you want square for:\n1)float\n2)integer\n1";
    cin>>ch;
    switch(ch){
        case 1:
        cout<<"enter the floating point integer:\n";
        cin>>num1;
        cout<<"the square of the float number is "<<sqaurecalculate(num1)<<endl;
        break;
        case 2:
         cout<<"enter the  integer:\n";
        cin>>num;
        cout<<"the square of the float number is "<<sqaurecalculate(num1)<<endl;
         
    }
    return 0;

}