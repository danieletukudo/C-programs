#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
int total{};
int num1{},num2{},num3{};
const int count{3};

cout <<"enter three integers seperated by space";
cin>>num1>>num2>>num3;
total = num1+num2+num3;

double average{0.0};
average =static_cast<double> (total)/count;
cout <<"the threee numbers are"<<num1<<num2<<num3<<endl;
cout<<"the sum of the number is"<<total<<endl;
cout <<"the aveage of the number is"<<average<<endl;

 


    
}


