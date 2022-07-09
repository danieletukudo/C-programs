#include <iostream>
using namespace std;

int main(){
    int  num1{},  num2{};
    
    cout <<"enter two integers seperated by a space";
    
    cin>> num1>> num2;
    if (num1 != num2){
        cout <<"lagest" <<((num1 >num2) ? num1:num2)<<endl ;
        cout <<"smallest"<<((num1<num2) ? num1 :num2)<<endl;
        
    }
    else {
        cout <<"/nthe numbers are the same";
    }
    return 0;
    
}
