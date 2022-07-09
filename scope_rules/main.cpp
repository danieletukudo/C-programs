#include <iostream>
using namespace std;

int num{10};
void static_variable(){
   static int num{5000};
   cout <<"\n static "<< num<<endl;
   
   num +=1000;
   cout<< "local static is "<<num<< "in static_local_example"<<endl;

 
}

int main()
{

 
    static_variable();
    static_variable();
    static_variable();
    
	return 0;
}
