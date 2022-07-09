#include <iostream>
#include <string>
#include <vector>

using namespace std;
void pass_by_value1 {int num};
void pass_by_value2 {string s};
void pass_by_value3{vector<string> v};

void pass_by_value1 (int num){
    
    num = 100
    }
void pass_by_value2(sting s){
    s = "changed";
    
}

void pass_by_value3(vector<string> v){
   for (auto s:v)
       cout<< s<<"";
}

int main()
{
	int num{10};
    int another_num{20};
    
    cout<<"num before calling pass by value";
    pass_by_value1(num);
    
    cout<<"num after calling pass by value 1: "<<num <<endl;
    
    
	return 0;
}
