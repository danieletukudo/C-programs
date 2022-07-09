#include <iostream>
using namespace std;

int main()
{
	int  firstnumber {};
    int secondnumber {};
    int number{};
    
    cout<< "Enter the numbers you'd love to add,subtract,divide and multiply seperated by a space: ";
    cin>>firstnumber;
    cin>>secondnumber;
    
    cout<< "The answer is " <<firstnumber<< "+" << secondnumber << "=: " << firstnumber+secondnumber<<endl;
    cout<< "The answer is " <<firstnumber<< "-" << secondnumber << "=: " << firstnumber-secondnumber<<endl;
    cout<< "The answer is " <<firstnumber<< "/" << secondnumber << "=: " << firstnumber/secondnumber<<endl;
    cout<< "The answer is " <<firstnumber<< "*" << secondnumber << "=: " << firstnumber*secondnumber<<endl;
    
    cout<<"Next, I'd love you to enter your favorite number between 1-100:  ";
    
    cin >>number;
    cout<<"\nWow " <<number<<" is  my favorite number too. "<<endl;
    
	return 0;
}
