#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{

//    for (int i{2}, j{1}; j<=10;j++){
//            cout<<i<< "x" <<j<< "="<<(i*j)<<endl;
//    }
//    
//   
//       cout << ((i%5==0)? "\n" : " ");
//        
//    } 
//        cout <<endl;

vector <int> nums{10,20,30,40,50};
for (int i{0}; i< nums.size(); ++i)
    cout <<nums[i]<<endl;
return 0; 
     
}