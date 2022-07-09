#include <stdio.h>
#include <iostream>
using namespace std;
#include <vector>
#include <iomanip> 

//
//    int score[] {100,102,32,53,13};
//    
//    for (auto s:score)
//        cout<<s<<endl;
//
//vector <double > temperatures{87.5,7.2,234.6};
//double average_temp{};
//double total{};
//
//for (auto tem:temperatures)
//    total+=tem;
//if (temperatures.size() !=0)
//    average_temp = total/temperatures.size();
//cout<<fixed<<setprecision(1);
//cout <<"average temperature  = "<<average_temp<<endl;

//for (auto val:"this is a test")
//   if (val==' ')
//       cout <<"\t";
//   else
//        cout<<val;
//        
//    
int main(){
char selection {};
do {
    
    cout<<"\n-------------"<<endl;
    cout <<"1. Do this"<<endl;
    cout <<"2. Do that"<<endl;
    cout <<"3. Do somthing else"<<endl;
    cout<< "Q Quit"<<endl;
     cout <<"Enter your selection"<<endl;
     
     cin>>selection;
 if (selection =='1')
         cout<<"y";
} 
while (selection !='q' && selection !='Q');


}