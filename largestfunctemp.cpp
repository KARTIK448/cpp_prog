#include<iostream>
using namespace std;
template<typename T>
T Largest(const T& num1,const T& num2){
    return (num1>num2?num1:num2);
}
int main(){
    int n1,n2;
    double num1,num2;
    cout<<"enter two integers\n";
    cin>>n1>>n2;
    cout<<"the largest of the two is:"<<Largest(n1,n2)<<endl;;
    cout<<"enter two floating_point integers"<<endl;
    cin>>n1>>n2;
    cout<<"the largest of the two is:"<<Largest(n1,n2)<<endl;
    return 0;
}