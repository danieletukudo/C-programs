#include <iostream>
using namespace std;
int main()
{
     const int dollar_value{100};
     const int quater_value{25};
     const int dime__value{10};
     const int nickel_value{5};
     
     int change_amount{};
     cout <<"Enter an amount in cents: ";
     cin>>change_amount;
     
     int balance{},dollars{},quaters{},dimes{},nickels{},pennies{};
     
     dollars = change_amount/dollar_value;
     balance = change_amount%dollar_value;
     
     quaters = balance/quater_value;
     balance %= quater_value;
     
     dimes = balance/dime__value;
     balance %= nickel_value;
     
     nickels = balance/nickel_value;
     balance %= nickel_value;
     
     pennies = balance;
     
     cout<<"\nYou can provide the change as follows: "<<endl;
     cout<<"dollars : "<<dollars<<endl;
     cout<<"quaters : "<<quaters<<endl;
     cout<<"dimes : "<<dimes<<endl;
     cout<<"nickels : "<<nickels<<endl;
     cout<<"pennies : "<<pennies<<endl;
     
	return 0;
}
