#include <iostream>
using namespace std;

int main()
{
    int rooms{};
    int chairs{};
    int table{};
    int windows{};
    int fans{};
    int Total;
    float Task {6.6};
    cout<<"Hello, Wellcome to Daniel's cleaning service"<<endl;
    cout<<"\nHow many rooms would you like clean: ";
    cin>>rooms;
    cout<<"How many chairs would you like clean: ";
    cin>>chairs;
    cout<<"How many tables would you like clean: ";
    cin>>table;
    cout<<"How many windows would you like clean: ";
    cin>>windows;
    cout<<"How many fans would you like clean: ";
    cin>>fans;
    
    cout<<"\nNumber of rooms: "<<rooms;
    cout<<"\nNumber of chair: "<<chairs;
    cout<<"\nNumber of tables: "<<table;
    cout<<"\nNumber of windows: "<<windows;
    cout<<"\nNumber of fans: "<<fans;
      
    cout<<"\n========================== ";
    
    cout<<"\nPrice per room: $25";
    cout<<"\nPrice per chair: $5 ";
    cout<<"\nPrice per table: $5";
    cout<<"\nPrice per window: $6";
    cout<<"\nPrice per fan: $4";
   
    
    
    Total = ((rooms*25)+(chairs*5)+(table*5)+(windows*6)+(fans*4));
   cout<<"\n========================== "<<endl;
    cout<<"\nCost: "<<Total<<endl;
    cout<<"Task: $6.6"<<endl;
    cout<<"\n========================== "<<endl;
    cout<<"\nTotal estimate:"<<Total+Task<<endl;
    cout<<"This estimate is valid for 30 days"<<endl;
    cout<<"\n========================== "<<endl;
    
	return 0;
}
