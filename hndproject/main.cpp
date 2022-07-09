#include <iostream>
using namespace std;


int main()
{
    float firstnumber{};
    float secondnumber{};
    
	cout<<"input two number you want to use for the operation: ";
    
    cin>>firstnumber;
    cin>>secondnumber;
    
    
    cout<< "The answer is " <<firstnumber<< "+" << secondnumber << "=: " << firstnumber + secondnumber<<endl;
    cout<< "The answer is " <<firstnumber<< "-" << secondnumber << "=: " << firstnumber - secondnumber<<endl;
    cout<< "The answer is " <<firstnumber<< "/" << secondnumber << "=: " << firstnumber / secondnumber<<endl;
    cout<< "The answer is " <<firstnumber<< "*" << secondnumber << "=: " << firstnumber * secondnumber<<endl;
    
	return 0;
}
