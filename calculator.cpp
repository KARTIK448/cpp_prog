#include<iostream>
using namespace std;
double add(double x,double y){
    return(x+y);
}
double subtract(double x,double y){
    return(x-y);
}
double multiply(double x,double y){
    return(x*y);
}
double divide(double x,double y){
    if(y==0){
    cout<<"cannot divide by 0"<<endl;
    return 0;
    }
    return(x/y);
}
int  main(){

cout<<"-----------WELCOME TO THE CALCULATOR-------------\n";
while(true)
{
    cout<<"select operation:\n";
    int ch;
    double x,y;
    cout<<"1) Addition \n2) Subtraction \n3) Multiplication \n4) Division\n5) Exit"<<endl;
    cin>>ch;
    if(ch==5)
     {cout<<"exiting the calculator";
     break;
     }
    cout<<"enter the first number: ";
    cin>>x;
    cout<<"enter the second number: ";
    cin>>y;
    switch(ch){
        case 1:
        cout<<"Result: "<<add(x,y)<<endl;
        break;
        case 2:
        cout<<"Result: "<<subtract(x,y)<<endl;
        break;
        case 3:
        cout<<"Result: "<<multiply(x,y)<<endl;
        break;
        case 4:
        cout<<"Result: "<<divide(x,y)<<endl;
        break;
    }
}
return 0;
}