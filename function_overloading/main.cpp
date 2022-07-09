#include <iostream>
using namespace std;

int addition(int x,int y){
    
    return x+y;
    
}
double addition( double x,double y){
    return x+y;
}

int main(){
   int whenint = addition(4,5);
   cout<< whenint<<endl;
   
   double whendouble = addition( 4.3,34.34);
   cout<<whendouble;
}
