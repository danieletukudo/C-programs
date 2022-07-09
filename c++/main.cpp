#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;


int main()
{
//	vector <char> vo{'q','r','y'};
//    vector <int> numbers {111,22,3,44,3};   
//    
//    cout << "enter a number that should be added to the vector"<<endl;
//     
//    int add{0};
//    cin>> add;
//    numbers.push_back(add);
//    cout << "enter another number that should be added to the vector"<<endl;
//       
//    int add1{0};
//    cin>>add1;
//     numbers.push_back(add1);
//     cout << numbers.size()<<endl;
//     cout << numbers.at(6)<<endl;
     
//    cin>> numbers.at(0); 
//    cin>> numbers.at(1);
//    cout<< number.at(0);
//    cout<< number.at(1);

//vector <vector<int>> movie_ratings{
//    
//    {2,3,2,4,5},
//    {4,3,5,6,3},
//    {5,5,3,5,2},
//    {3,4,2,5,53}    
//};
//
//cout <<"\n here are the movie ratings"<<endl;
//
//cout<< movie_ratings[0][0]<<endl;
//cout<< movie_ratings[1][1]<<endl;
//cout<< movie_ratings[2][2]<<endl;
//cout<< movie_ratings.at(0).at(0)<<endl;
//cout<< movie_ratings.at(1).at(1)<<endl;
//cout<< movie_ratings.at(2).at(2)<<endl;

    vector <int> vector1{};
    vector <int> vector2{};
    vector <vector<int>> vector2d{};
    int num1{};
    cout <<"input the first number of the vector"<<endl;
    cin>> num1;
    vector1.push_back(num1);
    int num2{};
    cout <<"input the second number of the vector"<<endl;
    cin>> num2;
    vector1.push_back(num2);
    
    int num21{};
    cout <<"input the first number of the vector2"<<endl;
    cin>> num21;
    vector2.push_back(num21);
    int num22{};
    cout <<"input the second number of the vector"<<endl;
    cin>> num22;
    vector2.push_back(num22);
   cout<<vector2.at(1)<<endl;
   cout<<vector2.size()<<endl;
  
   vector2d.push_back(vector1);
   vector2d.push_back(vector2);
   cout<<vector2d.size()<<endl;
   cout <<vector2d.at(0).at(0)<<""<<vector2d.at(0).at(1) <<endl;
    cout <<vector2d.at(1).at(0)<<""<<vector2d.at(1).at(1) <<endl;

  // cout<<"enter a new number to bbe added"<<endl;
    vector1.at(0) =1000;
   //cout<<vector1.at(0)<<endl;
   
   
   cout<<"new vector2d fig"<<endl;
    vector2d.push_back(vector1);
 //  cout<<vector2d.at(0).at(0);
//    
    
 
	return 0;
}
