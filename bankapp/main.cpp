#include <iostream>
using namespace std;
#include <vector>
int main(v)
{
	string stooges[] {"laerer","Sdsd","mary"};
    for (auto str: stooges){
        str = "funny";
    cout <<str;}
    for (auto &str: stooges){
        str = "funny";
   
    cout<<stooges;;
    
 }
   
	return 0;
}
