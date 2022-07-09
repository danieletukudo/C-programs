#include <iostream>
using namespace std;
#include <vector>
int main()
{

    
    int num_items{};
    
    cout<<"How many data items do you nave? " ;
    cin>> num_items;
    
    vector <int> data{};
    
    for (int i{1};i <= num_items; ++i){
        int data_item{};
        cout <<"enter data items"<< i<< ":";
        cin>>data_item;
        data.push_back(data_item);
    }
    
    cout<<"displaying histogram"<<endl;
    for (auto val:data){
       for (int i{1}; i<=val;++i){
           if (i%5 ==0)
               cout<<"*" ;
            else 
                cout <<"-";
       }
       cout <<endl;
    }
    cout <<endl ;
    return 0;  
    
}
